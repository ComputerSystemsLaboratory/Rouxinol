#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  string max_s1;
  string max_s2;
  int max_len = 0;
  int max_n = 0;
  map<string, int> m;

  while( cin >> s ) {
    m[s] ++;
    if( m[s] > max_n ) {
      max_n = m[s];
      max_s1 = s;
    }
    if( s.size() > max_len ) {
      max_len = s.size();
      max_s2 = s;
    }
  }

  cout << max_s1 << " " << max_s2 << endl;
}