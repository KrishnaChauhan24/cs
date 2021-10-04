#include <stdio.h>
#include <stdlib.h>
//Program execution begins here
int main()
{
 int A[10];
 int i, sum = 0;
 int *ptr;
 int n; //variable declaration
 printf("\nEnter the number of elements : ");
 scanf("%d",&n);
//Reading array elements
 printf("\nEnter the array elements : ");
 for (i = 0; i < n; i++)
 {
 scanf("%d", &A[i]);
 }
//Pointer holding the base address of array
 ptr = A;
//Computation of sum of array elements
 for (i = 0; i < n; i++)
 {
 sum = sum + *ptr;
 ptr++;
 }
 printf("The sum of array elements : %d", sum);
 return 0;
}
