#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
    
    for (int i = 0; i < n-1; i++)
    {
     for ( int j = 0; j <n-1-i; j++)
     {
        if(a[j]>a[j+1])
        {
            int x;
            x=a[j];
            a[j]=a[j+1];
            a[j+1]=x;
        }
     }
     
    }
    
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<"\n"<<a[i]<<"\t";
    
}
int main()
{
int n;
cout<<"enter the number of element";
cin>>n;
int a[n];
cout<<"Enter the "<<n<<" elements" ;
for (int k = 0; k < n; k++)
{
    cout<<"enter the "<<k+1<<" element";
    cin>>a[k];
}
cout<<"first array";
display(a,n);
bubble_sort(a,n);
cout<<"sorted array";
display(a,n);
return 0;
}

