#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  char c;
  stack<int> si;
  stack<pair<int, int>> sp;
  int i = 0, total = 0;
  while (scanf("%c", &c) != EOF) {
    if (c == '\\') si.push(i);

    if (c == '/' && !si.empty()) {
      int j = si.top(); si.pop();
      int a = i - j;
      total += a; 

      while (!sp.empty() && sp.top().first > j) {
        a += sp.top().second; sp.pop();
      }

      sp.push(make_pair(j, a));
    }

    i++;
  }

  cout << total << endl;
  
  vi suml;
  while (!sp.empty()) {
    suml.push_back(sp.top().second);
    sp.pop();
  }
  reverse(suml.begin(), suml.end());

  cout << suml.size();

  for (auto l: suml) {
    cout << " " << l;
  }
  cout << endl;
}

