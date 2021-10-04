#include <stdio.h>
//Program execution begins here
int main()
{
 int m, n, i,j, flag;
 printf("Enter two positive numbers(intervals): ");
 scanf("%d %d", &m, &n);
 if(m<0 || n <0 || m>n)
{
printf("Invalid input\n");
return 0;
}
 printf("Prime numbers between %d and %d are: ", m, n);
 for (i=m; i<n ;i++)
 {
 flag = 0;
 for(j = 2; j <= i/2; j++)
 {
 if(i % j== 0)
 {
 flag = 1;
 break;
 }
 }
 if (flag == 0)
 printf("%d ", i);
 }
 return 0;
}
