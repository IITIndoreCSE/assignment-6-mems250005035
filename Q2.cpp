// Write a program in C++ to create a function called join that joins two smaller arrays and creates a larger one. The two small arrays should be passed as parameters in the function and the larger array should be returned.
#include <iostream>
using namespace std;
int* join( int arr1[] , int size1, int arr2[], int size2 int &newsize) {
  newsize = size1 + size2 ;
int* result= new
int[newsize];
 for (int i = 0; i < size1; i++) {
    result[i] = arr1[i] ;
 }
 for (int j= 0; j < size2; j++) {
 result[size1 + j] = arr2[j];
 }
 return result;
}

int main() {
  int arr1[] = {1, 2, 3};
  int size1 size of(arr1) /
sizeof(arr1[0]);

  int arr2[] = {4, 5, 6, 7};
  int size2 = sizeof(arr2) /
sizeof(arr2[0]);

 int newsize;
 int* joinedArray = join(arr1 , size1 , arr2 size2 , newsize);
 cout << " Joined Array: ";
 for (int i = 0; i< newsize; i++)
{
 cout << joinedArray[i] << " " ;
   }
   cout << endl ;
   delete[]joinedArray;
   return 0;
}






















/* Test Case 1
Input:
Array1: [1, 2, 3]
Array2: [4, 5]
Output:
Joined Array: [1, 2, 3, 4, 5]
Test Case 2
Input:
Array1: [10, 20]
Array2: [30, 40, 50]
Output:
Joined Array: [10, 20, 30, 40, 50] */
