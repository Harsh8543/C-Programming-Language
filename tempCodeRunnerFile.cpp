#include <iostream>
using namespace std;

int main() {
  int num, sum = 0, ram, fact;

  cout << "Enter a number: ";
  cin >> num;

  int temp = num;
  while (temp > 0) {
    ram = temp % 10;
    fact = 1;
    for (int i = 1; i <= ram; i++) {
      fact *= i;
    }
    sum += fact;
    temp /= 10;
  }

  if (sum == num) {
    cout << num << " strong number." << endl;
  } else {
    cout << num << "  not a strong number." << endl;
  }

  return 0;
}