#include <iostream>
#include <string>
using namespace	std;

int main() {
  string input;
  cin >> input;
  string target;
  cin >> target;
  input	+= input;
  if (input.find(target) == -1) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}