// Write a program to populate a character array with letters of the alphabet at random; subsequently the letters in the array should be arranged alphabetically (without using the sort function).
#include <iostream>
using namespace std;
int main() {
  const int SIZE = 10;
char arr[SIZE];
cout << "Enter " << SIZE << " letters: ";
for (int i = o; i++) {
    cin >> arr[i];
}
for (int i = o; i < SIZE - 1 ; i++) {
    for (int j = 0 ; j < SIZE - i - 1; j++) {
        if (arr[j] > arr[j + 1] {
            char temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}
cout << "Sorted letters: ";
for (int i = 0; i < SIZE; i++) {
    cout << arr[i] << " " ;
}
cout << endl;
return 0;
}





















/* Test Case 1
Input:
Random letters: ['m', 'g', 'x', 'a', 'p', 'b', 'f', 'q', 't', 'd']
Output:
Sorted letters: ['a', 'b', 'd', 'f', 'g', 'm', 'p', 'q', 't', 'x'] */
