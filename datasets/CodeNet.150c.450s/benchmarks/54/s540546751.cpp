#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
  int count = 0;
  string w;
  string t;
  cin >> w;
  
  while (1) {
    cin >> t;
    if (t == "END_OF_TEXT")
      break;
    for (int i = 0; i < t.length(); i++) {
      t[i] = tolower(t[i]);
    }
    if (w == t) {
      count++;
    }
  }
  cout << count << endl;
}