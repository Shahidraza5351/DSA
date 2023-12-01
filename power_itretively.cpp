#include <iostream>
using namespace std;

double poweritretively(double base, int power)
 {
    double result = 1;
    
    for (int i = 0; i < abs(power); i++) {
        result *= base;
    }

        return result;    
}

int main() 
    {
        double base,result;
        int power;
        cout<<"enter the base :";
        cin>>base;
        cout<<"enter the power :";
        cin>>power;
        result=poweritretively(base,power);
cout<<base<<"^"<<power<<"=  "<<result<<endl;
    
    return 0;
}
