// includes
#include <cstdio>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <utility>
#include <functional>
#include <cmath>
#include <climits>
#include <bitset>

// macros
#define ll long long int
#define pb push_back
#define mk make_pair
#define pq priority_queue
#define FOR(i, a, b) for(int i=(a); i<(b);++i)
#define rep(i, n) FOR(i, 0, n)

using namespace std;

//  types
typedef pair<int, int> P;
typedef pair<ll, int> Pl;
typedef pair<ll, ll> Pll;
 
// constants
const int inf = 1e9;
const ll linf = 1LL << 50;
const double EPS = 1e-10;

// solve

int main(int argc, char const* argv[])
{
  int n;
  while(true){
    cin >> n;
    if(n == 0)break;
    vector<ll> a, sum;
    rep(i, n){
      ll x;
      cin >> x;
      a.pb(x);
      if(i > 0)sum.pb(sum[i-1] + x);
      else sum.pb(x);
    }
    ll res = - inf;
    rep(i, n){
      FOR(j, i, n){
        ll tmp = sum[j];
        if(i > 0)tmp -= sum[i - 1];
        res = max(res, tmp);
      }
    }
    cout << res << endl;
  }
	return 0;
}

