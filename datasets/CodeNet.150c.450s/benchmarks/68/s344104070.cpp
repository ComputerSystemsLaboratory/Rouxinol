#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 999999999
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vpii> vvpii;

int main() {
  int a;
  while (cin >> a, a) {
    int b[a], c[a - 1];
    rep(i, a) cin >> b[i];
    sort(b, b + a);
    rep(i, a - 1) c[i] = b[i + 1] - b[i];
    cout << *min_element(c, c + a - 1) << endl;
  }
  return 0;
}