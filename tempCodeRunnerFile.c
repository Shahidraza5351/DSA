#include<stdio.h>
void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
void selection_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++){
    int min_indx=i;
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[min_indx])
        min_indx=j;
    }
swap(&a[min_indx],&a[i]);
}

}

void display(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
    int main()
    {
        int n;