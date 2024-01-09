#include <iostream>

using namespace std;

bool is_prime(int n) {
  
  if (n <= 1) {
    return false;
  }

  
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      return false;  
    }
  }

  return true;  
}

int main() {
  int number;

  cout << "Enter a positive integer: ";
  cin >> number;

  if (is_prime(number)) {
    cout << number << " is a prime number." << endl;
  } else {
    cout << number << " is not a prime number." << endl;
  }

  return 0;
}
