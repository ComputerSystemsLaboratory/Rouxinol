#include <iostream>
using namespace std;

int main() {
  char str[21];
  int length = 0;
  cin >> str;
  for (int i = 0; str[i] != 0; i++) {
    length++;
  }
  for (int i = length-1; i>=0; i--) {
    cout << str[i];
  }
  cout << endl;
  return 0;
}
