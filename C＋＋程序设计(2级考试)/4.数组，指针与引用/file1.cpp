#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int arraySize;
    int * array;
    
    cout << "Please input the size of the array:";
    cin >> arraySize;
    array = new int[arraySize];
    if (arraySize = = NULL) {
            cout << "Cannot allocate more memory,exit the program. \n";
            exit(1);
}
    for(int i=0;i < arraySize;i++) array[i] = i*i;
    for(int i=0;i<arraySize;i++) cout <<array[i] <<" ";
    cout << endl;
    delete [] array;
    return 0;
}