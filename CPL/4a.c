#include <stdio.h>
#include <stdlib.h>
//Program execution begins here
int main()
{
int m,n,temp1,temp2,rem,gcd,lcm; //Integer variable declaration
printf("\nEnter two numbers : "); //Prompt the user to enter two numbers
scanf("%d%d",&m, &n); //Reading two integers
temp1 = m; //Preserving the original values
temp2 = n;
while(n > 0) //Loop body executed repeatedly until n becomes 0
{
rem = m%n;
m = n;
n = rem;
}
gcd = m;
lcm = temp1 * temp2 / gcd;
//Display the GCD of two given numbers
printf("\nThe GCD of %d and %d is %d\n",temp1,temp2,gcd);
//Display the LCM of two given numbers
printf("The LCM of %d and %d is %d\n\n",temp1,temp2,lcm);
return 0;
}
