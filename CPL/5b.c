#include <stdio.h>
//Program execution begins here
int main()
{
//Local Variables: ‘m’ and ‘n’ for indicating rows and columns of matrix
 // ‘A’, ‘p’ and ‘q’for indicating rows and columns of matrix ‘B’ and ‘c’
 // and ‘d’for indicating rows and columns of matrix ‘multiply’.
int m, n, p, q, i, j, k, sum = 0;
int A[10][10], B[10][10], multiply[10][10];//matrices to store the values
 // INPUT part
// Read the elements of the matrix A
printf("Enter number of rows and columns of, first matrix, A\n");
scanf("%d%d", &m, &n);
 printf("Enter elements of first matrix\n");
 for (i = 0; i < m; i++)
 for (j = 0; j < n; j++)
 scanf("%d", &A[i][j]);
 // Read the elements of the matrix B
 printf("Enter number of rows and columns of second matrix, B\n");
 scanf("%d%d", &p, &q);

 //Check for the Compatibility for multiplication
 if (n != p)
 printf("The matrices can't be multiplied with each other.\n");
 else
 {
 // Read the elements of the matrix B
 printf("Enter elements of second matrix\n");
 for (i = 0; i < p; i++)
 for (j = 0; j < q; j++)
 scanf("%d", &B[i][j]);
 // PROCESS part
 // Logic for Matrix Multiplication
 for (i = 0; i < m; i++) {
 for (j = 0; j < q; j++) {
for (k = 0; k < p; k++) {
 sum = sum + A[i][k]*B[k][j];
 }

multiply[i][j] = sum;
 sum = 0;
 }
 }

 //OUTPUT part
 //Print the values
 printf("Product of the matrices:\n");

 for (i = 0; i < m; i++)
 for (j = 0; j < q; j++)
 printf("%d\t", multiply[i][j]);

 printf("\n");
 }

 return 0;
}
