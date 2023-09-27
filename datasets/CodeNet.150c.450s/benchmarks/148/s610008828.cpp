#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int a = 0, b = 0, c = 0, d = 0;
  cin >> n;
  for(int i=0;i<n;i++) {
    string s;
    cin >> s;
    if(s == "AC") a++;
    else if(s == "WA") b++;
    else if(s == "TLE") c++;
    else if(s == "RE") d++;
  }
  cout << "AC x " << a << endl;
  cout << "WA x " << b << endl;
  cout << "TLE x " << c << endl;
  cout << "RE x " << d << endl;
  return 0;
}
