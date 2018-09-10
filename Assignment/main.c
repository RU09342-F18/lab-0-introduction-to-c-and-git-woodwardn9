/*
 * main.c
 *
 *  Created on: Sept 10, 2018
 * 	Last Edited: Sept 10, 2018
 *  Author: Nick Woodward
 */

/* Your assignment is to take the math function and implement at least the following functions:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/


#include <stdio.h>
#include "math.h"
//Part of your documentation should be listing the valid inputs and outputs for the functions you create.

int math(int num1, int num2, char Operator){
    
//Primary function//
if (Operator == '+') //Statement will perform addition with provided integers.
{
 int result;
  result = num1 + num2;
  printf ("%d added together with %d results in %d\n", num1, num2, result);
}


else if(Operator == '-') //Statement will perform subtraction with provided integers.
{
int result;
  result = num1 - num2;
  printf("%d subtracted by %d results in %d\n", num1, num2, result);
}


else if(Operator == '*') //Statement will perform multiplication with provided integers.
{
int product;
  product = num1 * num2;
  printf("%d multiplied by %d results in %d\n", num1, num2, product);
}


else if(Operator == '/') //Statement will perform division with provided integers.
{
int quotient;
  quotient = (float)num1 / (float)num2;
  printf("%d divided by %d results in %d\n", num1, num2, quotient);
}


else if(Operator == '%') //Statement will perform modulus with provided integers.
{
    int result;
result = num1 % num2;
  printf ("The result %d modulus %d is %d\n", num1, num2, result);
}
else if(Operator == '<') //Statement will shift over an integer a certain number of bits to the left.
{
int result;
  result = num1 << num2;
  printf("%d shifted over to the left by %d results in %d\n", num1, num2, result);
}
else if(Operator == '>') //Statement will shift over an integer a certain number of bits to the right.
{
  int result;
  result = num1 >> num2;
  printf("%d shifted over to the right by %d results in %d\n", num1, num2, result);
}
else if(Operator == '&')//Statement will AND together two integer values.
{
int result;
  result = num1 & num2;
  printf("%d ANDed with %d results in %d\n", num1, num2, result);
}
else if(Operator == '|')//Statement will OR together two integer values.
{
int result;
  result = num1 | num2;
  printf("%d ORed with %d results in %d\n", num1, num2, result);
}
else if(Operator == '^')//Statement will XOR together two integer values.
{
  int result;
  result = num1 ^ num2;
  printf("%d XORed with %d results in %d\n", num1, num2, result);
}
else if(Operator == '~')//Statement will inverse the num1 provided.
{
  int inverse;
  inverse = ~num1 + 1;
  printf("The inverse of %d is %d\n", num1, inverse);
}
}

