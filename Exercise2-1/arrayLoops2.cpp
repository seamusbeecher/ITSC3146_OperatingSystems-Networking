#include <bits/stdc++.h> 
using namespace std; 

//Swaps memory addresses of values at index *xp & *yp  
void swap(int *xp, int *yp) {  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
//A function to implement bubble sort  
void bubbleSort(int arr[], int n) {  
    int i, j;  
    for (i = 0; i < n-1; i++)     
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
  
//Function to print the array
void printArray(int arr[], int size) {  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i];  
    cout << endl;  
}  
  
//Driver code  
int main() {  
    int arr[10];  
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //User input
    cout << "Enter 10 numbers (Integers): " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    
    cout << "Origional order: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i];
    }
    cout << endl;
    
    cout << "Reversed order: " << endl;
    for (int i = 9; i >= 0; i--) {
        cout << arr[i];
    }
    cout << endl;
    
    //Function calls
    bubbleSort(arr, n);  
    cout<<"Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}