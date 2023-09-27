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
#define repll(i, a) REPLL(i, 0, a)
#define REPLL(i, a, b) for(ll i = a; i < b; ++i)

typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> P;
typedef std::pair<P, int> PP;
const double PI = 3.14159265358979323846;
const double esp = 1e-9;
const int infi = (int)1e+9 + 10;
const ll infll = (ll)1e+17 + 10;

int n, m;
int c[21];
int dp[50001];

int main(){
	rep(i, 50001)dp[i] = infi;

	std::cin >> n >> m;
	rep(i, m){
		int c;
		std::cin >> c;
		dp[c] = 1;
		rep(j, 50001){
			if (dp[j] != infi && j + c < 50001)dp[j + c] = std::min(dp[j + c], dp[j] + 1);
		}
	}
	std::cout << dp[n] << std::endl;
	return 0;
}