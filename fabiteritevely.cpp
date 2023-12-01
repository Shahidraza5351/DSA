#include <iostream>
using namespace std;
int fib(int n) {

    
    if (n ==1 ) 
        return 1;
    
    
    int prev = 0, curr = 1;
    for (int i = 3; i <= n; i++) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    
    return curr;
}

int main()
{
    int a;
    
    
    cout << "Enter the position in the Fibonacci sequence: ";
    cin >>a;
    
    
    int result = fib(a);
    
   // if (result != -1) {
        cout << "The Fibonacci value  value at position " << a << " is: " << result <<endl;
    //}
    
    return 0;
}






