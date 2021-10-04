
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Defining a symbolic constant PI
#define PI 3.1416
//Program execution begins here
int main()
{
int n, deg, i;
float num, den=1, x, sum=0;
printf("Enter the angle\n");
scanf("%d",&deg);
printf("Enter the number of terms\n");
scanf("%d",&n);
 x=deg*PI/180; //converting degrees to radians
num=x;
for (i=1; i<=n; i++) //loop iterates from i=1 to n to find the sum of ‘n’ terms
 {
sum = sum + num/den;
num = -num * x * x;
den = den * (i*2) * (i*2+1);
 }
printf("Calculated value is : sin(%d) = %f\n",deg,sum);
printf("Built-in function value is : sin(%d) = %f\n",deg, sin(x));
return 0;
}
