#include<iostream>
using namespace std;
int linear_search(int a[],int size,int key)
{
    for (int i = 0; i < size; i++)
    {
      if(a[i]==key)
      {
      return i;
    }}
    return 0;
}
int main ()
{
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int a[n];
    cout<<"enter the element of the array";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key;
    cout<<"enter the element to be search";
    cin>>key;
    int result=linear_search(a,10,key);
    if(result)
    {
        cout<<"the key is found at index :"<<result<<endl;
    }
    else
    {
     cout<<"key is not present in the array";
    }
    return 0;
}