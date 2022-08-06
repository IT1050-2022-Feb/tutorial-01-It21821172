/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,tot,avg;

  printf("Enter mark: ");
  scanf("%d", &mark1);

  printf("Enter mark: ");
  scanf("%d", &mark2);

  tot = mark1+mark2;
  avg = tot/2;

  printf("Average= %d ", avg);
  
  return 0;
}

