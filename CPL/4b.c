#include <stdio.h>
#include <stdlib.h>
//Program execution begins here
int main( )
{
int a[50], n, i, temp;
 //declares p1 & p2 as pointer variables that points to integer data type
int *p1,*p2;
//initialize p1 & p2 to point to ‘a’
p1 = p2 = a; //now p1 & p2 contains address of ‘a’
printf("\nEnter the number of elements: ");
scanf("%d", &n);
printf("\nEnter the elements:\n");
 for(i=0;i<n;++i)
scanf("%d", &a[i]);

 for(i=1;i<n;++i)
 {
 if(a[i] < *p1) //checks if a[i] is less than the value that p1 pointing to.
 p1 = &a[i]; //if true, update p1 to point to a[i]

 if(a[i] > *p2) //checks if a[i] is greater than the value that p2 pointing to.
 p2 = &a[i]; //if true, update p2 to point to a[i]
 }
printf("\nArray elements before swapping the largest and smallest elements\n");
 for(i=0;i<n;i++)
 printf("%d\t", a[i]);

printf("\n\nSmallest element in an array = %d\n",*p1);
printf("\nLargest element in an array = %d\n",*p2);

temp = *p1; //swapping smallest and largest number
 *p1 = *p2;
 *p2 = temp;
printf("\nArray elements after swapping the largest and smallest elements\n");
 for(i=0;i<n;i++)
 printf("%d\t", a[i]);
return 0;
}
