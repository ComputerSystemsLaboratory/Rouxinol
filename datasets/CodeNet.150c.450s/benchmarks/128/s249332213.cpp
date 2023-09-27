#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  cin >> s;
  while(!s.empty()) {
	cout << s.back();
	s.pop_back();
  }
  cout << endl;
  return 0;
}