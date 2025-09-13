// Write a program that populates an integer array, goes through it step by step and searches for a given number entered by the user. If the number is found, it should print “found” and return the position of the number; otherwise print “not found”.
#include <iostream>
using namespace std;
int main() {
  const int SIZE = 10;
int arr[SIZE];
cout <<"Enter" << SIZE << "integers :\n";
for (int i = 0; i < SIZE; i++) {
  cin >> arr[i];
}
int target;
cout << "Enter number to search:";
cin >> target;
bool found = false;
int position = -1;
for (int i=0; i < SIZE ; i++ ) {
    if (arr[i] == target) {
       found = true;
       position = i;
       break;
    }
}
if (found) {
   cout << "Found at position " << position << endl;
} else {
  cout << "Not Found" << endl;
}
return 0;
}





























/* Test Case 1
Input:
Array: [1, 3, 5, 7, 9]
Search: 5
Output:
Found at position: 2
Test Case 2
Input:
Array: [2, 4, 6, 8]
Search: 7
Output:
Not found */

