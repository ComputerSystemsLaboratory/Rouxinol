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
  cin >> n;
  rep(j, n){
    double x[4], y[4];
    rep(i, 4){
      cin >> x[i] >> y[i];
    }
    if(abs((x[1] - x[0]) * (y[3] - y[2]) - (x[3] - x[2]) * (y[1] - y[0])) < EPS){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
	return 0;
}

