#include <stdlib.h>
//Program execution begins here
int main()
{
 float n1, n2, res; //variable declaration
 char op;
 //enter an expression without space in between operands and operator
 printf("Enter an arithmetic expression");
 scanf("%f%c%f", &n1,&op,&n2);
 switch(op) //perform arithmetic operation based on the entered operator
 {
 case '+' :
res = n1 + n2;
 break;
 case '-' :
res = n1 - n2;
 break;
 case '*' :
res = n1 * n2;
 break;
 case '/' :
if (n2 == 0) //check whether denominator is zero or not
 {
 printf("\nError: Division by zero\n");
 return 0;
 }
 res = n1 / n2;
 break;
 default:
printf("\nError: Invalid operator. Enter +, -, * or / only\n");
return 0;
 }
 printf("\n%f %c %f = %f\n", n1, op, n2, res); //print the result
 return 0;
}
