//  Write a program in C++ with a function called add to add two complex numbers and another function called subtract to subtract one complex number from another. 
#include <iostream>
using namespace std;
struct Complex{
    float real;
    float imag;
};
Complex add(Complex c1 , Complex c2) {
  Complex result;
  result.real = c1.real + c2.real;
  result.imag = c1.imag + c2.imag;
  return result;
}
Complex subtract(Complex c1 , Complex c2) {
  Complex result;
  result.real = c1.real - c2.real;
  result.imag = c1.imag - c2.imag;
  return result;
}
void display(Complex c) {
  if (c.imag >= 0)
    cout << c.real << " + " << c.imag << "i";
  else
    cout << c.real << " - " << -c.imag << "i";
}

int main() {
  Complex num1 , num2 , sum , diff ;

 cout << "Enter real and imaginary part of first complex number: ";
 cin >> num1.real >> num1.imag;

 cout << "Enter real and imaginary part of second complex number: ";
 cin >> num2.real >> num2.imag;

 sum = add(num1 , num2);
 diff = subtract(num1 , num2);
 
 cout << "\nSum =  ";
 display(sum);
 cout << "\nDifference = ";
 display(diff);

 cout << endl;

 return 0;
}

















/* Test Case 1
Input:
Complex Number 1: 3 + 2i
Complex Number 2: 1 + 4i
Output:
Sum: 4 + 6i
Difference: 2 – 2i
Test Case 2
Input:
Complex Number 1: 5 + 7i
Complex Number 2: 2 + 3i
Output:
Sum: 7 + 10i
Difference: 3 + 4i */
