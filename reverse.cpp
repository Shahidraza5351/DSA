#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end)
{
    if(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
}