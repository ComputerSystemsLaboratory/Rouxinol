#include <iostream>
using namespace std;

int main() {
  int length, width;
  cin >> length >> width;
  int circumference, space;
  circumference = (length + width) * 2;
  space = length * width;
  cout << space << " " << circumference << endl;
  return 0;
}