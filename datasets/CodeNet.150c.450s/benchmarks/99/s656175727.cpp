#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <sstream>

using namespace std;

int a[128];
char b[1001];

int s2i(string s) {
  int ret = 0;

  int N = s.size();
  for(int i=0; i<N; i++) {
    if(isdigit(s[i])) {
      int temp = s[i]-'0';
      i++;
      ret += temp * a[s[i]];
    }
    else {
      ret += a[s[i]];
    }
  }
  
  return ret;
}

string i2s(int x) {
  string ret;
  stringstream ss; ss << x;
  
  string s = ss.str();
  int N = s.size();
  
  for(int i=0; i<N; i++) {
    if(s[i] == '1') ret += b[(int)pow(10, N-i-1)];
    else if(s[i] == '0') {}
    else {
      ret += s[i];
      ret += b[(int)pow(10, N-i-1)];
    }
  }
  
  return ret;
}

int main() {
  int n;

  a['m'] = 1000;
  a['c'] = 100;
  a['x'] = 10;
  a['i'] = 1;
  
  b[1000] = 'm';
  b[100] = 'c';
  b[10] = 'x';
  b[1] = 'i';
  
  cin >> n;
  for(int i=0; i<n; i++) {
    string s, t; cin >> s >> t;
    cout << i2s(s2i(s) + s2i(t)) << endl;
  }
  
  return 0;
}