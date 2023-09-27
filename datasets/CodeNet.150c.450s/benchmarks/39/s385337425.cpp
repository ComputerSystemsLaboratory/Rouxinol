#include <iostream>
using namespace std;

int main() {
  int in1, in2;
  int area, circum;
  cin >> in1 >> in2;
  area = in1*in2;
  circum = 2*(in1+in2);
  cout << area << " " << circum << endl;
  return 0;
}