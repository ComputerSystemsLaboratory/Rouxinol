#include <bits/stdc++.h> 

using namespace std;
string s;
int s1, s2, s3, s4;

int main() 
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    cin >> s;
    char a = s[0];
    if (a == 'A') ++s1;
    else if (a == 'T') ++s2;
    else if (a == 'R') ++s3;
    else ++s4;
  }
  cout << "AC x " << s1 << '\n';
  cout << "WA x " << s4 << '\n';
  cout << "TLE x " << s2 << '\n';
  cout << "RE x " << s3 << '\n';
}