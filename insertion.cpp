#include<iostream>
using namespace std;

void insertion(int a[],int n)
{
for(int i=1;i<n;i++)
{
    int key=a[i];
    int j=i-1;
    while (a[j]>key && j>=0)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;

}
}
void display(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
       cout<<a[i]<<endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
       
       cin>>a[i];
    } cout<<"w";
    display(a,n);
    insertion(a,n);
    cout<<"e";
    display(a,n);
    return 0;
    
}