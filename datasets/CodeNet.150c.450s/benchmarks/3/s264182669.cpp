#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main(){
  string s;
  cin >> s;
  int n;
  cin >> n;
  string q;
  int a, b;
  for (int i = 0; i < n; i ++) {
    cin >> q >> a >> b;
    if (q == "print") {
      string t = s.substr(a, b - a + 1);
      cout << t << endl;
    } else if (q == "reverse") {
      string t = s.substr(a, b - a + 1);
      int j = b - a;
      for (int i = a; i <= b; i ++) {
        s[i] = t[j];
        j --;
      }
    } else if (q == "replace") {
      string p;
      cin >> p;
      for (int i = 0; i < b - a + 1; i ++) {
        s[i + a] = p[i];
      }
    }
  }
}
