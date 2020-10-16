//
//  QuickSort_Skeleton.cpp
//
//  Created by Bahamon, Julio on 6/25/19.
//  UNC Charlotte
//  Copyright © 2019 Bahamon, Julio. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

//  Declaring a new struct to store patient data
struct patient {
    int age;
    char name[20];
    float balance;
};


//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY AGE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE AGE OF THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S AGE
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE
int compAge (const void *a, const void *b) {
    
    int temp1 = ((struct patient *)a) -> age;
    int temp2 = ((struct patient *)b) -> age;
    
    if (temp1 < temp2) {
        
        return -1;
        
    } else if (temp1 == temp2) {
        
        return 0;
        
    } else
    
        return 1;
        
}



//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY BALANCE DUE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE BALANCE FOR THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S BALANCE
//       0 IF THE BALANCES ARE EQUAL
//       1 OTHERWISE
int compBalance (const void *a, const void *b) {
    
    int temp1 = ((struct patient *)a) -> balance;
    int temp2 = ((struct patient *)b) -> balance;
    
    if (temp1 < temp2) {
        
        return -1;
        
    } else if (temp1 == temp2) {
        
        return 0;
        
    } else
    
        return 1;
        
}

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY NAME

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE NAME OF THE FIRST PATIENT GOES BEFORE
//         THE SECOND PATIENT'S NAME
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE
//
//  HINT: USE THE strncmp FUNCTION
//  (SEE http://www.cplusplus.com/reference/cstring/strncmp/)
int compName(const void *a,const void *b) {
    
    patient *ia = ((struct patient *)a);
    patient *ib = ((struct patient *)b);
    
    if(strcmp(ia->name, ib->name)<0) {
        
        return -1;
        
    } else if(strcmp(ia->name, ib->name)==0) {
        
        return 0;
        
    } else {
        
        return 1;
    }
}

//  The main program
int main()
{
    int total_patients = 5;
    
    //  Storing some test data
    struct patient patient_list[5] = {
        {25, "Juan Valdez   ", 1250},
        {15, "James Morris  ", 2100},
        {32, "Tyra Banks    ", 750},
        {62, "Maria O'Donell", 375},
        {53, "Pablo Picasso ", 615}
    };
    
    
    cout << "Patient List: " << endl;
    
    //  TODO:
    //  IMPLEMENT THE CODE TO DISPLAY THE CONTENTS
    //  OF THE ARRAY BEFORE SORTING
    for (int i = 0; i < total_patients; i++) {
        cout << "\t" << "Age: " << patient_list[i].age << "\t" << "Name: " << patient_list[i].name << "\t" << "Balance Due: " << patient_list[i].balance << endl;
    }
    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT AGE
    qsort(patient_list, total_patients, sizeof(patient_list[0]), compAge);
    
    cout << "Patient List - Sorted by Age: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY AGE
    for (int i = 0; i < total_patients; i++) {
        cout << "\t" << "Age: " << patient_list[i].age << "\t" << "Name: " << patient_list[i].name << "\t" << "Balance Due: " << patient_list[i].balance << endl;
    }
    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT BALANCE
    qsort(patient_list, total_patients, sizeof(patient_list[0]), compBalance);
    
    cout << "Patient List - Sorted by Balance Due: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY BALANCE
    for (int i = 0; i < total_patients; i++) {
        cout << "\t" << "Age: " << patient_list[i].age << "\t" << "Name: " << patient_list[i].name << "\t" << "Balance Due: " << patient_list[i].balance << endl;
    }
    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT NAME
    qsort(patient_list, total_patients, sizeof(patient_list[0]), compName);
    
    cout << "Patient List - Sorted by Name: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY NAME
    for (int i = 0; i < total_patients; i++) {
        cout << "\t" << "Age: " << patient_list[i].age << "\t" << "Name: " << patient_list[i].name << "\t" << "Balance Due: " << patient_list[i].balance << endl;
    }
    
    cout << endl;
    
    return 0;
}
