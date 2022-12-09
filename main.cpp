// Gannon Moore || J00965925 || November 14, 2022
// Page 264 - Prime Numbers

#include <iostream>
using namespace std;

int main() {

  int i, num;
  bool primeTest = true;

  cout << "Enter a positive integer: ";
  cin >> num;

  if (num == 1 || num == 1) {
    primeTest = false;
  }

  for (i = 2; i <= num/2; ++i) {
    if ((num % i) == 0) {
      primeTest = false;
      break;
    }
  }

  if (primeTest)
    cout << num << " is a prime number";
  else
    cout << num << " is not a prime number";

  return 0;
}
