#include <iostream>
using namespace std;

int main() {
  int n, array[100];
  int pointer = 0;
  while (cin >> n) {
    if (n == 0) {
      cout << array[--pointer] << endl;
    } else {
    array[pointer++] = n;
    }
  }
  return 0;
}
