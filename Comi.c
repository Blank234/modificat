#include <stdio.h>
#include <math.h>

int sr;
int sum;
int den;
int ch;

int proverka (int sum, int sr)
{
    
  
if (sum<10000)
{
     ch = 1;  
    }
if (sr > 365)
{
    
    ch = 1;
    }
if (sr < 0)
{
    ch = 1;
    }
 return ch;
}

int vich (int sum, int sr)
{
if (sum < 100000)
{
if (sr < 31 && 0 <= sr)
{  
    den = sum - sum / 100 * 10;                      
    }  
if (sr < 121 && 31 <= sr)
{  
    den = sum + sum / 100 * 2;                   
    }  
if (sr < 241 && 121 <= sr)
{  
    den = sum + sum / 100 * 6;                   
    }   
if (sr < 366 && 241 <= sr)
{  
    den = sum + sum / 100 * 12;                     
    }                    
    }
if (sum > 100000)
{
if (sr < 31 && 0 <= sr)
{  
    den = sum - sum / 100 * 10;         
    }  
if (sr < 121 && 31 <= sr)
{  
    den = sum + sum / 100 * 3;                   
    }  
if (sr < 241 && 121 <= sr)
{  
    den = sum + sum / 100 * 8;                    
    }   
if (sr < 366 && 241 <= sr)
{  
    den = sum + sum / 100 * 15;              
    } 
    }
    return den;
}

int main()
{
  next:
  ch = 0;
    printf ("Vvedite summu vklada \n\n\n");
    scanf ("%d", &sum);
    printf ("Vvedite srok \n\n\n");
    scanf ("%d", &sr); 

    printf ("Proverka \n\n\n",proverka(sum, sr));
if(ch == 1)
{
printf ("Oshibka\n\n\n");
  goto next;
}

if ( sum < 100000)
{
if (sr < 31 && 0 <= sr)
{  
    printf ("Vasha summa sostavlyaet %d\n\n\n", vich(sum, sr));                       
    }  
if (sr < 121 && 31 <= sr)
{  
    printf ("Vasha summa sostavlyaet %d\n\n\n", vich(sum, sr));                       
    }  
if (sr < 241 && 121 <= sr)
{  
    printf ("Vasha summa sostavlyaet %d\n\n\n", vich(sum, sr));                       
    }   
if(sr < 366 && 241 <= sr)
{  
    printf ("Vasha summa sostavlyaet %d\n\n\n", vich(sum, sr));                       
    }                    
    }  
    if (sum > 100000)
    {
    if (sr < 31 && 0 <= sr)
    {  
    printf ("Vasha summa sostavlyaet %d\n\n\n", vich(sum, sr));                       
    }  
    if (sr < 121 && 31 <= sr)
{  
    den = sum + sum / 100 * 3;
    printf ("Vasha summa sostavlyaet %d\n\n\n", vich(sum, sr));                       
    }  
    if (sr < 241 && 121 <= sr)
{  
    printf ("Vasha summa sostavlyaet %d\n\n\n", vich(sum, sr));                       
    }   
    if (sr < 366 && 241 <= sr)
    {  
    printf ("Vasha summa sostavlyaet %d\n\n\n", vich(sum, sr));                       
    } 
    }    

return 0;
}
