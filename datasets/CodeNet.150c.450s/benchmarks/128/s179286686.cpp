#include <iostream>
using namespace std;

int main() {
  int n;
  char s[21];
  cin >> s;
  for (n=0;s[n]!=0;n++);
  for (int i=0;i<n;i++) {
    cout << s[n-i-1];
  }
  cout << endl;
  return 0;
}