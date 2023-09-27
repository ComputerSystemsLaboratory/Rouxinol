#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int m2i(string s) {
  int v = 0;
  for (int i = 0; i < s.size(); ++i) {
    switch(s[i]) {
     case 'm':
      if (i == 0) v = 1000;
      else v = (s[i-1] - '0') * 1000;
      break;
     case 'c':
      if (i == 0 || (s[i-1] > '9' || s[i-1] < '0')) v += 100;
      else v += (s[i-1] - '0') * 100;
      break;
     case 'x':
      if (i == 0 || (s[i-1] > '9' || s[i-1] < '0')) v += 10;
      else v += (s[i-1] - '0') * 10;
      break;
     case 'i':
      if (i == 0 || (s[i-1] > '9' || s[i-1] < '0')) v += 1;
      else v += s[i-1] - '0';
      break;
    }
  }
  return v;
}

string i2m(int n) {
  string v;
  if (n >= 2000) {
    v += '0' + (n / 1000);
  }
  if (n >= 1000) {
    v += 'm';
    n %= 1000;
  }
  if (n >= 200) {
    v += '0' + (n / 100);
  }
  if (n >= 100) {
    v += 'c';
    n %= 100;
  }
  if (n >= 20) {
    v += '0' + (n / 10);
  }
  if (n >= 10) {
    v += 'x';
    n %= 10;
  }
  if (n >= 2) {
    v += '0' + n;
  }
  if (n >= 1) {
    v += 'i';
  }
  return v;
}

int main() {
  int n;
  cin >> n;
  REP(i,n) {
    string a;
    string b;
    cin >> a >> b;
    int ai = m2i(a);
    int bi = m2i(b);
    cout << i2m(ai + bi) << endl;
  }
  return 0;
}