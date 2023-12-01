#include<stdio.h>
int findElement(int arr[],int n, int key)
{
    int i;
    for (i=0;i<n;i++)
    if (arr[i]==key)
    
        return i;
    
    
    
        return -1;
    
} 
int main()
{
    int arr[]={12,34,10,6,40};
    int n = sizeof(arr);
     int key=50;
     int position = findElement(arr,n,key);
     if (position == -1)
     {
        printf("Element is not found");
     }
     else
     {
        printf("Element is found at position: %d",position + 1);

     }
     
     
    return 0;
}