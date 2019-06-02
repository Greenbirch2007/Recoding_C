#include <iostream>

using namespace std;

int main()
{
    int *p;
    int x = 36;
    cout << "Line 1: x= " << endl;
    p = &x;
    cout << "Line 3 : *p = " << *p << ",x= " << endl;
    *p = 58;
    cout << "Line 5 : *p=" << *p << ", x=" <<x << endl;

    cout << "Line6 : Address of p = "<< &p << endl;
    cout << "Line7 : Value of p = " << p << endl;
    cout <<" Line8 : Value of the memory location" << " pointed to by *p = " << *p <<endl;
    cout <<"Line 9 : Address of x= " << &x << endl;
    cout <<"Line 10: Value of x =" << x << endl;
    return 0;
    }