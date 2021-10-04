#include <stdio.h>
#include <stdlib.h>
//Function declarations
void readArray(int a[100], int n);
void bubbleSort(int a[100], int n);
void displayArray(int a[100], int n);
//Program execution begins here
int main()
{
int a[100], n;
 printf("\nBubble Sort technique\n");
 printf("\nEnter the number of elements to sort\n");
 scanf("%d",&n);// Reading the number of elements in the unsorted array
 readArray(a,n); //function call to generate random numbers

printf("\nArray elements before sorting\n");
 displayArray(a,n); //function call to display unsorted array elements
 bubbleSort(a,n); //function call to sort array elements
 printf("\nSorted elements using bubble sort technique are\n");
 displayArray(a,n); //function call to display sorted array elements

return 0;
}
//Function definition to read the unsorted array
void readArray(int a[100], int n)
{
 int i;
 printf("\nEnter %d elements to sort\n",n);
 for(i=0; i<n; i++)
 scanf("%d",&a[i]);
}
//Function definition to display array elements
void displayArray(int a[100], int n)
{
int i;
 for(i=0;i<n;i++)
 printf(" %d \t",a[i]);
}
//Function definition to implement bubble sort
void bubbleSort(int a[100], int n)
{
int i, j, temp;
 for(i=0; i<n-1; i++)
for(j=0; j<n-i-1; j++)
 if(a[j] > a[j+1]) //swap elements if a[j] is greater than a[j+1]
 {
 temp = a[j];
 a[j] = a[j+1];
 a[j+1] = temp;
 }
}
