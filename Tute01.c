/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int marks1,marks2,sum;
  float average;

  printf("enter your subjects marks1 :");
  scanf("%d",&marks1);

  printf("enter your subjects marks2 :" );
  scanf( "%d",&marks2);

  sum=marks1+marks2;
  average=(marks1+marks2)/2;

  printf( "your marks sum :%d\n",sum);
  printf("your marks average :%f",average);



 
 


  
  return 0;
}

