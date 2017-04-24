#include <unistd.h>
#include <stdlib.h>
#include "ctest.h"

// basic test without setup/teardown
CTEST(suite1, test1) {
    usleep(2000);
}

// there are many different ASSERT macro's (see ctest.h)
CTEST(suite2, test1) {

    const int sum = 10000;
    const int den=sum-sum/100*10;                       

    ASSERT_EQUAL(9000, den);
}

CTEST(suite2, test2) {
    const int sum = 10000;
    const int den = sum + sum / 100 * 2;                          
    ASSERT_EQUAL(10200, den);
}

CTEST(suite2, test3) {
    const int sum = 10000;
    const int den = sum + sum / 100 * 6;                           
    ASSERT_EQUAL(10600, den);
}

CTEST(suite2, test4) {
    const int sum = 10000;
    const int den = sum + sum / 100 * 12;                              
    ASSERT_EQUAL(11200, den);
}

CTEST(suite3, test1) {
    const int sum = 10000;
    const int den = sum - sum / 100 * 10;                              
    ASSERT_EQUAL(9000, den);
}

CTEST(suite3, test2) {
    const int sum = 10000;
    const int den = sum + sum / 100 * 3;                             
    ASSERT_EQUAL(10300, den);
}

CTEST(suite3, test3) {
    const int sum = 10000;
    const int den = sum + sum / 100 * 8;                              
    ASSERT_EQUAL(10800, den);
}


CTEST(suite3, test4) {
    const int sum = 10000;
    const int den = sum + sum / 100 * 15;                              
    ASSERT_EQUAL(11500, den);
} 
  


CTEST(suite4, test1) {
    const int sum = 11000;
     int p=0;  
     
   if (sum<10000)
{  
	  p=1;
    }


                           
    ASSERT_EQUAL(1, p);
} 

CTEST(suite4, test2) {
    const int sum = 9000;
    int p=0;  
     
   if (sum<10000)
{  
	  p=1;
	
    }
                           
    ASSERT_EQUAL(1, p);
} 


CTEST(suite5, test1) {
    const int sum = 90000;
    int p=0;  
     
   if (sum > 100000)
    {
      p=1;
    }  
                           
    ASSERT_EQUAL(1, p);
} 

CTEST(suite5, test2) {
    const int sum = 110000;
    int p=0;  
     
   if (sum > 100000)
    {
      p=1;
    }  
                           
    ASSERT_EQUAL(1, p);
} 


CTEST(suite6, test1) {
    const int sr= 280;
    int p=0;  
     
  if (sr > 365)
{
    
    p = 1;
    } 
                           
    ASSERT_EQUAL(1, p);
} 

CTEST(suite6, test2) {
    const int sr= 380;
    int p=0;  
     
  if (sr > 365)
{
    
    p = 1;
    } 
                           
    ASSERT_EQUAL(1, p);
} 

CTEST(suite7, test1) {
    const int sr= 100;
    int p=0;  
     
 if (sr < 0)
{
    p = 1;
    }

                           
    ASSERT_EQUAL(1, p);
} 

CTEST(suite7, test2) {
    const int sr= -100;
    int p=0;  
     
 if (sr < 0)
{
    p = 1;
    }
                           
    ASSERT_EQUAL(1, p);
} 

