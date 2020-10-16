/*
 @file: pthreads_skeleton.cpp
 
 @author: student name1, student2@uncc.edu
 @author: student name2, student2@uncc.edu
 @author: student name3, student3@uncc.edu
 
 @description: A program that demonstrates processes.
 
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */

#include <pthread.h>
#include <iostream>

using namespace std;

//array
int array[10];

// This function shows the skeleton that pthread 
// functions must adhere to. 
// Copy this skeleton for any pthread function 
// you need to define. 
// In the copy, modify the name of the function 
// and the function body as needed. 
void *countNegatives(void *arg)
{
   // TODO: Add code that implements
   //       the thread's functionality
   int count = 0;
   for (int i = 0; i < 10; i++) {
       if (array[i] < 0) {
           count++;
       }
   }
   cout << "Total Negatives: " << count << endl;
}

void *average(void *arg)
{
   int sum = 0;
   for (int i = 0; i < 10; i++) {
       sum += array[i];
   }
   
   int ave = sum / 10;
   cout << "Average: " << ave << endl;
   
}

void *reverse(void *arg)
{
   
   cout << "The numbers in reverse" << endl;
   for (int i = 9; i >= 0; i--) {
       cout << array[i] << endl;
   }
}


int main()
{
   // id is used to store a unique thread identifier,
   // returned by the call to create a new POSIX thread
   pthread_t id, id2, id3;
   
   // rc is used to store the code returned by the
   // call to create a new POSIX thread. The value is
   // zero (0) if the call succeeds.
   int rc;
   void *stat;
   
   cout << "Enter 10 numbers: " << endl;
   for (int i = 0; i < 10; i++) {
       cin >> array[i];
   }
   
   
   // TODO: Add code to perform any needed initialization
   //       or to process user input

   
   // Create thread(s)
   // TODO: Modify according to assignment requirements
   //First
   rc = pthread_create(&id, NULL, countNegatives, NULL);

   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }
   pthread_join(id, &stat);
   for (int count = 0; count < 100000; count++);
   
   //Second
   rc = pthread_create(&id2, NULL, average, NULL);

   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }
   pthread_join(id2, &stat);
   for (int count = 0; count < 100000; count++);
   
   //Third
   rc = pthread_create(&id3, NULL, reverse, NULL);

   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }
   pthread_join(id3, &stat);
   for (int count = 0; count < 100000; count++);

   // NOTE: Using exit here will immediately end execution of all threads
   pthread_exit(0);
}
