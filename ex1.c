/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMINDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */

  printf("please enter a number \n");
  int num1;
  scanf("%d",&num1);
  int pos1;
  printf("please enter a position \n");
  scanf("%d",&pos1);
  printf("%d",(num1>>pos1)&1);


  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  printf("please enter a number \n");
  int num2;
  scanf("%d",&num2);
  int pos2;
  printf("please enter a position \n");
  scanf("%d",&pos2);
  printf("%d \n", num2^(1<<pos2));
  printf("%d \n", num2^0);


  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  printf("please enter a number \n");
  int num4;
  scanf("%d",&num4);
  printf("%d",num4&0);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
