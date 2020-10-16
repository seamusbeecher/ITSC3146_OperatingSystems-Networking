#include <bits/stdc++.h> 
using namespace std; 
  
int main() {
    
    int n = 10;
    int array[n];
    
    //User input
    cout << "Enter in 10 Integers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << endl;
    
    //Display origional order
    cout << "Origional form:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << array[i];
    }
    cout << endl;
    
    //Display reversed order
    cout << "Reversed form:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << array[i];
    }
    cout << endl;
    
    //Bubble sort the array
    for(int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        } 
    }
    
    //Display Bubble sorted order
    cout << "Bubble sorted form:" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i];
    }
    cout << endl;
    return 0;
}
