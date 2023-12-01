#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1]){
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;

    }
}
}}
void display(int a[], int n )
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;

    }
}
int main()
{
    int n;
    cout<<"enter the elements";
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the element";
        cin>>a[i];
    }
    cout<<"array before sorting";
    display(a,n);
    bubblesort(a,n);
    cout<<"array after sorting";
    display(a,n);
    return 0;
}