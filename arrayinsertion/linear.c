#include<stdio.h>
int linearsearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    if(arr[i]==element)
    return 1;
    return -1;
}
int main()
{
    int arr[]={3,8,4,9,2};
    int size,element,position;
    size=sizeof(arr)/sizeof(arr[0]);
    element=8;
    position=linearsearch(arr,size,element);
    if (position==-1)
    printf("element not found");
    else
    printf("element found at position %d:",position+1);
    return 0;
}