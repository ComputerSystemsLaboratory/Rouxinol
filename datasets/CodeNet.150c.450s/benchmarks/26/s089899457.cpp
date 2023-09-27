#include <iostream>
#include <string>
using namespace std;

int main() {
  int a, b;
  string result;

  cin >> a >> b;

  if (a < b ) {
    result = "a < b";
  } else if ( a > b) {
    result = "a > b";
  } else if (a == b) {
    result = "a == b";
  }

  cout << result << endl;
  
  return 0;
}