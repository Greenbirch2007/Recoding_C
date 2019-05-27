#include <iostream>

using namespace std;


int a = 1 , b = 2;

cout << !a << "~~~~~~~~~" << !(a-b) << endl;
cout << a && b << "~~~~~~~~~~" << a&&(a-1) << endl;
cout << a || b <<"~~~~"<< a || (b-2) << endl;
