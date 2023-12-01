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
    int a[10]={2,5,3,8,12,54,65,48,32,9};
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