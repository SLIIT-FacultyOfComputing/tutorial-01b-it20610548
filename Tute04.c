/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d\n ", minimum(no1, no2));
   printf("%d \n", maximum(no1, no2));
   printf("%d \n", multiply(no1, no2));

  return 0;}

   int multiply(no1,no2)
   {
     int mul;
     mul= no1+no2;
     return mul;
   }
   int minimum(no1 ,no2)
   {
      
      
      
       if(no2>no1)
       {
         return no1;
       }
       else
       {
         return no2;
       }
      
   }

   int maximum(no1,no2)
   {
      

     if(no2<no1)
     {
       return no1;
     }
     else
     {
       return no2;
     }

   }

  

