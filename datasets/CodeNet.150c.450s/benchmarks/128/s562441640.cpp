#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  for(int i = s.size()-1; i >= 0; i--) printf("%c", s[i]);
  cout << endl;
}