#include <bits/stdc++.h>
using namespace std;

int A[128];
char B[1001];

int conv(const string &a) {
  int res = 0;
  for(int i = 0; i < a.size(); ++i) {
    int d = 1;
    if(isdigit(a[i])) {
      d = a[i++] - '0';
    }
    res += d * A[a[i]];
  }
  return res;
}

string conv(const int x) {
  string res;
  for(int i = 1000; i >= 1; i /= 10) {
    int d = x / i % 10;
    if(!d) continue;
    if(d > 1) res += (char)(d + '0');
    res += B[i];
  }
  return res;
}

int main() {
  A['m'] = 1000;
  A['c'] = 100;
  A['x'] = 10;
  A['i'] = 1;
  B[1000] = 'm';
  B[100] = 'c';
  B[10] = 'x';
  B[1] = 'i';
  int n; cin >> n;
  while(n--) {
    string a, b;
    cin >> a >> b;
    cout << conv(conv(a) + conv(b)) << endl;
  }
  return 0;
}