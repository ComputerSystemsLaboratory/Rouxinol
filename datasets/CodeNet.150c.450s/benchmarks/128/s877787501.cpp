#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  for(int i=0; i<(s.size()/2); i++) {
    char tmp = s[i];
    s[i] = s[s.size()-1-i];
    s[s.size()-1-i] = tmp;
  }

  cout << s << endl;
}