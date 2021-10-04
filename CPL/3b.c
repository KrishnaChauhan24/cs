#include <stdio.h>
#include <stdlib.h>
//Function declaration
int fact(int);
//Program execution begins here
int main()
{
int n,r,result; // variable declaration
printf("\nEnter the value of n\n");
scanf("%d", &n);
printf("\nEnter the value of r\n");
scanf("%d", &r);
if(n < r) // n should always be greater than r
{
printf("\nResult does not exist\n");
 return 0;
}
result = fact(n) / (fact(r)*fact(n-r)); // call the function fact with parameters n, r, n-r
printf("\nFor n = %d and r = %d, %dC%d = %d\n", n ,r, n, r, result);
return 0;
}
//Function definition to find the factorial of a number
int fact(int n)
{
if(n == 0)
return 1; //0! is 1
else
return (n * fact(n - 1)); /* Repeatedly call the same function by decrementing
n by 1 each time until n is equal to 0*/
}
