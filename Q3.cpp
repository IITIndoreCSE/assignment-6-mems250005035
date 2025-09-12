// Write a program that asks the user for an integer number and finds the sum of all natural numbers up to that number.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer:";
    cin >> n ;
    if (n<1) {
    cout << "Please enter natural number (greater than 0)." << endl;
    } else {
    for (int i=1; i<=n; i++) {
    sum += i;
    }
    cout << " Sum of natural numbers upto " << n << "=" << sum << endl;
    }
    return 0;
 }






















/* Test Case 1
Input:
Number: 5
Output:
Sum: 15
Test Case 2
Input:
Number: 10
Output:
Sum: 55 */
