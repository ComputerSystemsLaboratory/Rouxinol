#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef long double ld;
typedef tree<ll,null_type,less<ll>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define int ll
#define endl "\n"
#define all( x ) x.begin(), x.end()
#define rev_all( x ) x.rbegin(), x.rend()
#define fast ios::sync_with_stdio(0);cin.tie(0);

typedef unsigned long long ull;

const int mod = 1e9 + 7;
const int inf = 1e12 + 5;
const long double PI = 3.141592653589793;

void solve(){
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for(int& x:a)cin >> x;
  for(int i = k; i < n; i++){
    cout << (a[i] > a[i-k] ? "Yes" : "No") << endl;
  }
}
signed main(){
  fast;
  int t = 1;
  //cin >> t;
  for(int i = 1; i <= t; i++){
    solve();
  }
}