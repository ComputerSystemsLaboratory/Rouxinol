#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0;i < (n);i++)
#define all(c) (c).begin(),(c).end()
#define min(a, b) ((a) <= (b) ? (a) : (b))
#define max(a, b) ((a) >= (b) ? (a) : (b))

typedef unsigned int uint;

using namespace std;

int main() {
  while(true) {
    int n;
    cin >> n;
    if(n == 0) break;

    map<char, char> table;
    rep(i, n) {
      char k, v;
      cin >> k >> v;
      table[k] = v;
    }

    int m;
    cin >> m;
    rep(i, m) {
      char c;
      cin >> c;
      if(table.find(c) != table.end()) {
        cout << table[c];
      }
      else {
        cout << c;
      }
    }
    cout << endl;
  }

  return 0;
}