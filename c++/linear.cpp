#include<iostream>
using namespace std;
int find_element(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
        
        
    }
    return -1;
}
int main()
{
    int arr[]={12,32,74,83,8,12,45,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter the number you want to search in array  ";
    cin>>key;
    int position=find_element(arr,n,key);
    if (position==-1)
    {
        cout<<"element is not present in the array";
    }
    else{
        cout<<"element is found at "<<position+1<<" position";
    }
    return 0;
}