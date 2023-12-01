#include<iostream>
using namespace std;

int calculatepower(int base ,int power)
{
    if (power ==0)
    
        return 1;
    

    else
    
    return ( base*calculatepower(base,power-1));
    
    
}




int main()
{
    int base,power,result;
    cout<<"enter the base number";
    cin>>base;
    cout<<"enter the power";
    cin>>power;
    result=calculatepower(base,power);
    cout<<base<<"^"<<power<<"="<<result<<endl;
    return 0;

}