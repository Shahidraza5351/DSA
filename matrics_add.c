#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,r,c;

    printf("enter the number of row");
    scanf("%d",&r);
    printf("enter the number of coloums");
    scanf("%d",&c);
    printf("Enter the elements of 1st matrix\n");
    for( i=0;i<r;i++)
    for( j=0;j<c;j++)
    {
    printf("element of 1st matrix%d%d\t",i,j);
    scanf("%d",&a[i][j]);
    }
    printf("Emter the element of 2nd matrix\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
{
    printf("element of 2nd matrix%d%d\t",i,j);
    scanf("%d",&b[i][j]);
}
    
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
    sum[i][j]=a[i][j]+b[i][j];
    }
    printf("sum of two matrix\n");
    
    for(i=0;i<r;i++)
    
    for(j=0;j<c;j++)
    {
    printf("%d",sum[i][j]);
    
    
        printf("\n\n");
    
    }

    return 0;
}
