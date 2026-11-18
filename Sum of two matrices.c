#include <stdio.h>
int main()
{
int m,n,i,j;
printf("Enter the the no. of rows  in matrices");
scanf("%d",&m);
printf("Enter the the no. of columns  in matrices");
scanf("%d",&n);
int a[m][n],b[m][n],c[m][n];
printf("Enter the numbers in matrices A\n");
for( i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Enter a[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the numbers in matrices B\n");
for( i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Enter b[%d][%d]\n",i,j);
        scanf("%d",&b[i][j]);
    }
}
for( i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        c[i][j]=a[i][j]+b[i][j];

    }
}
    printf("\n sum is");
    for( i=0;i<m;i++)
{

    for(j=0;j<n;j++)
    {
    printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}

