#include <stdio.h>
#include <stdlib.h>

#include <math.h>
 int main()
{
float a,b,c;
float r1,r2;
float disc;
printf("Enter the Coefficients of X for the given Quadratic Equation:\n");
scanf("%f%f%f",&a,&b,&c);
if(a==0)
{
printf("\n It is not a quadratic equation");
exit(0);
}

 disc = b*b-4*a*c ;
 disc = b*b-4*a*c ;/*check discriminant to find the type of roots, then calculate and print roots accordingly*/
if( disc==0) //Roots are real and equal
 {
 r1=r2=-b/(2*a);
printf("\nRoots are real and equal\n\nRoot1 = Root2 = %f",r1);
 }
else if(disc>0) //Roots are real and distinct
{
 r1= (-b+sqrt(disc))/(2*a);
r2= (-b-sqrt(disc))/(2*a);
printf("\nRoots are real and distinct\n\nRoot1 = %f \nRoot2 = %f",r1,r2);
}
else //Roots are imaginary
{
r1= -b/(2*a);
r2= sqrt(fabs(disc))/(2*a);
printf("\nRoots are imaginary\n\nRoot1 = %f + i%f\nRoot2 = %f - i%f",r1,r2,r1,r2);
 }
return 0;
 }
