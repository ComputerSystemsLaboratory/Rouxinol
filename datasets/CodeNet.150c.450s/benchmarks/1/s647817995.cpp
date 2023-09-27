#include <bits/stdc++.h>
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<long long, long long> Pll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvll;
template <typename T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template <typename T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
const int INT_INF = 1LL << 30;

int main(){
  ll n;
  cin >> n;
  vll a(n);
  for(int i = 0; i < n; i++){
    cin >> a.at(i);
  }
  vll dp(100100, INF); //dp.at(i)は長さi+1のときの最終要素の最小値
  dp.at(0) = a.at(0);
  for(int i = 0; i < n; i++){
    *lower_bound(ALL(dp), a.at(i)) = a.at(i);
  }
  ll ans = distance(dp.begin(), lower_bound(ALL(dp), INF));
  cout << ans << endl;
}
