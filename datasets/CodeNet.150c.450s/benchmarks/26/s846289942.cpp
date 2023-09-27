#include <iostream>
using namespace std;

int main (int argc, char **argv) {
  int a, b;
  cin >> a >> b;

  string result;
  if (a > b) {
    result = "a > b" ;
  } else if (a < b) {
    result = "a < b";
  } else {
    result = "a == b";
  }
  cout << result << endl;
}