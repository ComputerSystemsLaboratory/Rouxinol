//\\//\\ * * * //\\// ||
#include <bits/stdc++.h> 

#define debug(x) cerr << #x << ": " << x << endl

using namespace std;

typedef long long ll;

void Do(string s, int k) {
  cout << s << " " << 'x' << " " << k << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, c0, c1, c2, c3;
  c0 = c1 = c2 = c3 = 0;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    if (s == "AC") ++c0;
    if (s == "WA") ++c1;
    if (s == "TLE") ++c2;
    if (s == "RE") ++c3;
  }
  Do("AC", c0);
  Do("WA", c1);
  Do("TLE", c2);
  Do("RE", c3);
  return 0;
}
