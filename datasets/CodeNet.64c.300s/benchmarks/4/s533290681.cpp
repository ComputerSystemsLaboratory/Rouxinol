#include <iostream>
#include <string>
using namespace std;

int main() {
  int a, b, c;
  string result;

  cin >> a >> b >> c;

  if (a < b) {
    if (b < c) {
      result = "Yes";
    } else {
      result = "No";
    }
  } else {
    result = "No";
  }

  cout <<  result << endl;

  return 0;
}