/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int n ,sum =0,c, value;

  printf("how many numbers you want to add?\n");
  scanf("%d",&n);

  printf("enter %d integers\n",n);

  for ( c=1; c<= n; c++)
  {
    scanf("%d",&value);
    sum=sum+value;
  }
  printf("sum of the integers =%d\n",sum);
  
  return 0;
}

