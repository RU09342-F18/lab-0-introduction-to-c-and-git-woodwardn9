/*
 * math.h
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

#ifndef MATH_H_
#define MATH_H_

int math(int num1, int num2, char Operator);

int main()
{
  //Takes 5 and 3 and adds them together using the add function int math
math(5,3,'+');
// Takes 5 and subtracts it by 3 using the subtract function int math
math(5,3,'-');
//Takes 6 and divides it by 3 using the divide function in int math
math(6,3,'/');
//Takes 10 and multiples it by 3 using the multiplication function in int math
math(10,3,'*');
//Takes 7 and divides it by 3 using the modulus function in int math
math(7,3,'%');
//Takes 5 and shifts it left 3 bits using the shift left function in int math
math(5,3,'<');
//Takes 50 and shifts it right 3 bits using the shift right function in int math
math(50,3,'>');
//Takes 4 and ANDs it together with 2 using the AND function in int math
math(4,2,'&');
//Takes 20 and ORs it together with 14 using the OR function in int math
math(20,14,'|');
//Takes 1 and XORs it together with 10 using the XOR function in int math
math(1,10,'^');
//Takes 1 and inverses its value using the inverese function in int math
math(1,3,'~');
}

#endif /* MATH_H_ */
