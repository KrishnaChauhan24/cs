#include <stdio.h>
#include <stdlib.h>
//Program execution begins here
int main(void)
{
int a[100], key, n, i, low, high, mid;
printf("Searching key element using Binary search technique");
 printf("\n---------------------------------------------------");
 printf("\nEnter the number of elements: ");
 scanf("%d", &n);
 //Reading array elements
 printf("\nEnter %d elements in ascending order\n", n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

 //Display the array elements
 printf("\nEntered array elements are:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);

 printf("\nEnter the key element to be searched: ");
 scanf("%d", &key);
 // Implementation of binary search technique
 low = 0;
 high = n-1;
 while(low <= high)
 {
 mid = (low + high)/2; //computes mid position
 if(key == a[mid]) //print position if key matches with value at mid position
 {
 printf("\nSuccess, key %d is found at position %d",key,mid+1);
 exit(0);
 }
 else if(key < a[mid])
 high = mid - 1; //set high to mid-1 if key is less than value at mid position
 else
 low = mid + 1; //set low to mid-1 if key is greater than value at mid position
 }
 printf("\nFailure, key %d is not found",key); //Print failure if key is not found
}
