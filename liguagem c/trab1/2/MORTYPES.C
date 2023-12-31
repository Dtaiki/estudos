                             /* Chapter 4 - Program 2 - MORTYPES.C */
/* The purpose of this file is to introduce additional data types  */
#include<stdio.h>
#include <stdlib.h>
int main()
{
int a, b, c;            /* -32768 to 32767 (16bits, ou short int) no decimal point */
                        /* -2 147 483 648 to 2 147 483 647 (int de 32bits) ou long int */
char x, y, z;           /* -128 to 127 with no decimal point     */
float num, toy, thing;  /* 3.4E-38 to 3.4E+38 with decimal point */

   a = b = c = -27;
   x = y = z = 'A';
   num = toy = thing = 3.6792;

   a = y;             /* a is now 65 (character A)               */
   printf("%d\n", a);
   x = b;             /* x is now -27                            */
   printf("%d\n" , x);
   num = b;           /* num will now be -27.00                  */
   printf("%.2f\n", num);
   a = toy;           /* a will now be 3                         */
   printf("%d\n\n", a);

system("pause");
   return 0;
}



/* Result of execution

(No output from this program.)

*/
