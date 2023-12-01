#include<iostream>
using namespace std;
void add(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {

sum+=arr[i];
    }
    cout<<"sum of array = "<<sum<<endl;
}
int main()
{
    int size;
    cout<<"size of array"<<endl;
    cin>>size;
    int arr[100];
    cout <<"enter the element of array"<<endl;
    for(int i=0;i<size;i++)
    {
        
        cin>>arr[i];
    }
    add(arr,size);
    return 0;
}