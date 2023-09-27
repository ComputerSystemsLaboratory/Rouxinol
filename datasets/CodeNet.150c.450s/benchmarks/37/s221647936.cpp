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
  double a, b, c, d, e, f;
  while(cin >> a){
    cin >> b >> c >> d >> e >> f;
    double det = a * e - b * d;
    cout << setprecision(3);
    cout << fixed;
    cout << double((ll)((e * c - b * f) / det * 1000) / 1000.);
    cout << " ";
    cout << double((ll)((- d * c + a * f) / det * 1000) / 1000.) << endl;
  }
	return 0;
}

