#include<iostream>
using namespace std;

int main() {
    
    int n = 4;
    int my_ints[n];
    int *my_ptrs[n];
    
    cout << "Enter 4 Integers: ";
    
    //Populating data in my_ints
    for (int i = 0; i < n; i++) {
        cin >> my_ints[i];
    }
    
    //Populating my_ptrs array
    for (int i = 0; i < n; i++) {
        my_ptrs[i] = &my_ints[i]; // assign the address of integer.
   }
   
   cout << "Origional Form: " << endl;
   
   //Origional Form
   for (int i = 0; i < n; i++) {
       cout << *my_ptrs[i] << " ";
   }
   
   cout << endl;
   
   //Swapping my_pointers array 
   for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (*my_ptrs[i] < *my_ptrs[j]) {
                int *temp = my_ptrs[i];
                my_ptrs[i] = my_ptrs[j];
                my_ptrs[j] = temp;
            }
        } 
    }
   
   cout << "Sorted Form: " << endl;
   
   //After Sorting Form
   for (int i = 0; i < n; i++) {
       cout << *my_ptrs[i] << " ";
   }
   
   return 0;
}