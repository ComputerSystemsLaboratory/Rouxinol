#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vvi vector<vector<int>>
#define vec vector
#define pq priority_queue
#define all(v) (v).begin(), (v).end()
#define uniqueV(x) sort(x.begin(), x.end()); x.erase(unique(x.begin(), x.end()), x.end());
#define rep(i, n) for (int (i) = (0); (i) < (n); ++(i))
#define repp(i, m, n) for (int (i) = (m); (i) < (n); ++(i))
#define dbg(x) cerr << #x << ": " << x << endl;
#define dbg2(x, y) cerr<<"("<<#x<<", "<<#y<<") = "<<"("<<x<<", "<<y<<")"<<endl;
#define dbg3(x, y, z) cerr<<"("<<#x<<", "<<#y<<", "<<#z<<") = "<<"("<<x<<", "<<y<<", "<<z<<")"<<endl;
#define dbgB(value, size) cerr<<#value<<": "<<bitset<size>(value) << endl;
#define line() cerr << "---------------" << endl;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const double PI = 3.14159265358979323846;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

template<typename T, typename U>
void print1(T Array, U size) {
  for (int i = 0; i < size; i++) {
    cout << Array[i] << " ";
  }
  cout << endl;
}

template<typename T>
void print(T Array, int height, int width) {
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      cout << " " << Array[i][j];
    }
    cout << endl;
  }
}

// ------------------------------------------------------------------------------------------

int n;
int dp[55];

int rec(int stage) {
  if (stage == 0) {
    return dp[stage] = 1;
  }
  
  if (dp[stage] != -1) {
    return dp[stage];
  }

  int ans = 0;

  for (int i = 1; i <= 3; i++) {
    if (stage - i < 0) continue;
    ans += rec(stage - i);
  }

  return dp[stage] = ans;
}

signed main() {
  fill(dp, dp+33, -1);
  rec(30);
  while (1) {
    cin >> n;
    if (n == 0) break;
    int t = (dp[n] + 3650 - 1) / 3650;
    cout << t << endl;
  }

  return 0;
}
