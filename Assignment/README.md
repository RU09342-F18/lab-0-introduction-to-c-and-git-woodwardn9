 *  Created on: Sept 10, 2018
 * 	Last Edited: Sept 10, 2018
 *  Author: Nick Woodward

The purpose of math.h and main.c files are to perform a series of mathematical functions (addition, subtraction, multipliation, division, modulus) and bitwise operations (shift left, shift right, and, or, xor, and inverse) on numbers input into the respective functions

The math.h file is a header file which calls on the int math function inside of the main.c file as seen below:

int math(int num1, int num2, char Operator)
{
...
}

The function contained within main.c can perform the following functions when called upon:
- Addition
- Subtraction
- Multiplication
- Division (integer with rounding)
- Modulus 
- Shift Left
- Shift Right
- AND
- OR
- XOR
- Inverse

In order to call upon a particular function, the format below must be used:

math(num1, num2, Operator);

Where num1 and num2 are value type int and can be any positive or negative integer and operator is of value type char.

Each operation within the int math function prints out the result of the operation called upon. This can be tested by manipulating the values inside the called functions within math.h to prove functionality.

