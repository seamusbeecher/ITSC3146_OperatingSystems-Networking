#include<iostream>
using namespace std;

int main() {
    
//Number 1    
    //Part A
    int myInt = 15;
    int *myPointer = &myInt;
    
    //Part B
    //Memory Location myInt
    cout << "Memory Location of myInt: " << &myInt << endl;
    //Value of myPointer
    cout << "myPointer Value: " << myPointer << endl;
    //Value of myInt
    cout << "myInt Value: " << myInt << endl;
    //Value pointed to by myPointer
    cout << "Value pointed to by myPointer: " << *myPointer << endl;
    
    //Part C 
    myInt = 10;
    cout << "Memory Location of myInt: " << &myInt << endl;
    //Value of myPointer
    cout << "myPointer Value: " << myPointer << endl;
    //Value of myInt
    cout << "myInt Value: " << myInt << endl;
    //Value pointed to by myPointer
    cout << "Value pointed to by myPointer: " << *myPointer << endl;
    cout << "File pointerBasics Printed" << endl;
    
    return 0;
}