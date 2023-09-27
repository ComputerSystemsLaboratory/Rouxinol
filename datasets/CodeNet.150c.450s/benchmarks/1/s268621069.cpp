#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cctype>
#include <sstream>

#define rep(i, a) REP(i, 0, a)
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define rrep(i, a) RREP(i, a, 0)
#define RREP(i, a, b) for(int i = a; i >= b; --i)
#define repll(i, a) REPLL(i, 0, a)
#define REPLL(i, a, b) for(ll i = a; i < b; ++i)
#define rrepll(i, a) RREPLL(i, a, 0)
#define RREPLL(i, a, b) for(ll i = a; i >= b; --i)

typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> P;
typedef std::pair<P, int> PP;
const double PI = 3.14159265358979323846;
const double esp = 1e-9;
const int infi = (int)1e+9 + 10;
const ll infll = (ll)1e+17 + 10;

int n;
int a[100001];
int dp[100001];

int main(){
	std::cin >> n;
	rep(i, n)std::cin >> a[i];
	rep(i, n)dp[i] = infi;

	rep(i, n){
		*std::lower_bound(dp, dp + n, a[i]) = a[i];
	}
	std::cout << std::lower_bound(dp, dp + n, infi) - dp << std::endl;

	return 0;
}