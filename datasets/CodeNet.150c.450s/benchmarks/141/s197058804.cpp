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
double x[4], y[4];

double calc(int i, int j, int k){
  return 0.5 * abs((x[j] - x[i]) * (y[k] - y[i]) - (x[k] - x[i]) * (y[j] - y[i]));
}

int main(int argc, char const* argv[])
{
  while(cin >> x[0]){
    cin >> y[0];
    FOR(i, 1, 4){
      cin >> x[i] >> y[i];
    }
    double area = calc(0, 1, 2);
    double tmp = calc(0, 1, 3) + calc(0, 2, 3) + calc(1, 2, 3);
    if(abs(area - tmp) < EPS){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
	return 0;
}

