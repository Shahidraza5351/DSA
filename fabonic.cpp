#include <iostream>
using namespace std;


int fib(int n)
 {
    if (n <= 1) 
    
        return 1;
 else
    return fib(n -2) + fib(n -1);

 }
int main()
 {
    int a;
    cout << "Enter the position in the Fibonacci sequence: ";
    cin >> a;
    cout << "The Fibonacci number at position " << a << " is: " << fib(a) <<endl;
    

    return 0;

 }
