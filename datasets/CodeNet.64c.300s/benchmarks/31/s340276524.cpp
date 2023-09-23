#include <iostream>
#include <vector>
using namespace std;
bool s[31] = {0};
int main() {
  int n;
  for(int i = 1; i <= 28; ++i) {
	cin >> n;
	s[n] = 1;
  }
  for(int i = 1; i <= 30; ++i) {
	if(!s[i]) cout << i << endl;
  }
  return 0;
}