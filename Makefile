CFLAGS =-Wall -Werror -c
TFLAGS =-I thirdparty -I src
.PHONY: clean

%.o: %.c ctest.h
	$(CC) $(CCFLAGS) -c -o $@ $<

test: deposit-calc-test
	mkdir buldtest -p
deposit-calc-test: buldtest/deposit_test.o buldtest/maint.o buldtest/deposit.o
	gcc buldtest/deposit_test.o buldtest/maint.o build/deposit.o -o bin/deposit-test

buldtest/deposit_test.o: test/deposit_test.c
	gcc $(TFLAGS) $(CFLAGS) test/deposit_test.c -o buldtest/deposit_test.o
buldtest/maint.o: test/maint.c
	gcc $(TFLAGS) $(CFLAGS) test/maint.c -o buldtest/maint.o

all: bin/deposit-calc

build/main.d: src/main.c
	mkdir build -p
	gcc -Wall -Werror -c -o build/main.o src/main.c -MP -MMD
build/deposit.d: src/deposit.c
	mkdir build -p
	gcc -Wall -Werror -c -o build/deposit.o src/deposit.c -MP -MMD
bin/deposit-calc: build/main.o build/deposit.o
	mkdir bin -p
	gcc -Wall -Werror -o bin/deposit-calc build/deposit.o build/main.o 
clean: 		
	rm build/*.o
	rm build/*.d
	rm build/test/*.o
	rm -f test *.o
-include build/main.d
-include build/deposit.d


