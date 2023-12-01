#include<iostream> // Use C++ headers for I/O
using namespace std; // Use the standard namespace

int main()
{
    int mainArray[] = {1, 2, 3, 4, 5, 6};
    int *p = mainArray;
    int (*pp)[6] = &mainArray; // Use a pointer to an array of size 6
    
    cout << "address of mainArray: " << mainArray << endl;
    cout << "address of mainArray: " << &mainArray << endl;
    cout << "address of p: " << p << endl;
    cout << "address of pp: " << pp << endl;
    
    cout << "value of 0th element: " << mainArray[0] << endl;
    cout << "value of 1st element: " << mainArray[1] << endl;
    cout << "value of 0th element: " << *mainArray << endl;
    cout << "value of 1st element: " << *(mainArray + 1) << endl;
    
    // Value with array's address
    cout << "value with array's address" << endl;
    
    cout << "value of 0th element: " << (*pp)[0] << endl;
    cout << "value of 0th element + 1: " << (*pp)[0] + 1 << endl;
    cout << "value of 0th element + 7: " << (*pp)[0] + 7 << endl;
    cout << "value of 1st element: " << (*pp)[1] << endl;
    
    return 0;
}
