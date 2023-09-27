#include <iostream>
using namespace std;
int main() {
  int s, A = 0, B = 0;
  for(int i = 0; i < 4; ++i) {
	cin >> s;
	A += s;
  }
  for(int i = 0; i < 4; ++i) {
	cin >> s;
	B += s;
  }
  cout << (A >= B ? A : B) << endl;
  return 0;
}