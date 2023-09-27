#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>
#include <queue>
#include <stack>
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
typedef std::pair<int, P> PP;
const double PI = 3.14159265358979323846;
const double esp = 1e-9;
const int infi = (int)1e+9 + 10;
const ll infll = (ll)1e+18 + 10;

std::string str1, str2;
int s1, s2;
int dp[1005][1005];

int main(){
	std::cin >> str1 >> str2;
	s1 = str1.size();
	s2 = str2.size();

	rep(i, s1 + 1)dp[i][0] = i;
	rep(i, s2 + 1)dp[0][i] = i;

	REP(i, 1, s1 + 1){
		REP(j, 1, s2 + 1){
			int cost = 1;
			if (str1[i - 1] == str2[j - 1])cost = 0;
			dp[i][j] = std::min(dp[i - 1][j] + 1, std::min(dp[i][j - 1] + 1, dp[i - 1][j - 1] + cost));
		}
	}

	std::cout << dp[s1][s2] << std::endl;

	return 0;
}