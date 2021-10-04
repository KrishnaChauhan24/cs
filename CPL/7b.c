#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void readarray(int a[], int n);
void displayarray( int a[], int n);
void SelectionSort(int a[], int n);

int main(void)
{
int a[100],n;
printf("\nEnter the size of the array:\n");
scanf("%d",&n);
readarray(a,n);
printf("\nUnsorted Array is\n");
displayarray(a,n);
SelectionSort(a,n);
printf("\nSorted Array is \n");
displayarray(a,n);
return 0;
}

void readarray( int a[], int n)
{
int i;
printf("enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}

void SelectionSort(int a[], int n)
{
int i,j,pos,temp;
for(i=0;i<n;i++)
{

pos = i;
for(j=i+1;j<n;j++)
    {
    if(a[j]<a[pos])
        pos = j;
    }
temp = a[i];
a[i] = a[pos];
a[pos] = temp;
}
}

void displayarray( int a[], int n)
{
int i;
 for(i=0;i<n;i++)
printf("%4d\n",a[i]);
}
