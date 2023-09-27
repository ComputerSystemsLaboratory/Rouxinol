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

int N, W;
int dp[10001];

int main(){
	rep(i, N)dp[i] = -1;
	dp[0] = 0;

	std::cin >> N >> W;
	rep(i, N){
		int v, w;
		std::cin >> v >> w;
		rrep(j, 10001){
			if (dp[j] != -1 && j + w < 10001)dp[j + w] = std::max(dp[j + w], dp[j] + v);
		}
	}
	std::cout << *std::max_element(dp, dp + W + 1) << std::endl;
	return 0;
}