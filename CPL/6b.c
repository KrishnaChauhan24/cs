#include <stdio.h>
#include <stdlib.h>
//Function definition to calculate row sum
int rowSum(int arr[], int numCol)
{
 int sum=0;
 for(int i=0;i<numCol;i++)
 {
 sum+=arr[i];
 }
 return sum;
}
//Function definition to calculate column sum
int colSum(int arr[],int col, int numRow, int numCol)
{
 int sum=0;
 for(int i=0; i<numRow;i++)
 {
 sum+=*(arr+col+numCol*i);
 }
 return sum;
}
//Program execution begins here
int main()
{
 int m,n;
 printf("Enter the order of Matrix:");
 scanf("%d%d", &m, &n);
 int mat[m][n];
 int i,j;
 printf("Enter a (%dx%d) matrix in row major order:\n",m,n);
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 scanf("%d",&mat[i][j]);
 printf("\nThe matrix is:\n");
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 printf("%d\t",mat[i][j]);
 printf("\n");
 }
 for(i=0;i<m;i++)
 {
 printf("Sum of %d row is %d\n", i,rowSum(mat[i], n));
 }
 for(i=0; i<n;i++)
 printf("Sum of %d column is %d\n", i,colSum(mat[0], i, m,n));
 return 0;
}
