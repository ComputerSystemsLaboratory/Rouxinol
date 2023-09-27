#include <iostream>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <map>
#include <cmath>
#include <queue>
#include <utility>
#include <functional>
#include <deque>
#include <cctype>
#include <stack>
#include <bitset>

using ll = long long;
typedef unsigned long long ull;
typedef std::pair<ll, ll>P;

ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}
ll lcm(ll a, ll b) {
	ll g = gcd(a, b);
	return a / g * b;
}

const ll mod = 1000000007;
const ll INF = 1 << 30;
const ll INF2 = 9000000000000000000LL;
bool fl = true;
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
std::string abc = "abcdefghijklmnopqrstuvwxyz";
struct edge { ll to, cost; };
struct edge1 { ll from, to, cost; };
double pai = 3.141592653589793;

int main() {
	int q;
	std::cin >> q;
	for (int i = 0;i < q;i++) {
		std::string s, t;
		std::cin >> s >> t;
		int dp[1010][1010];
		for (int j = 0;j < s.size();j++) {
			for (int k = 0;k < t.size();k++) {
				if (s[j] == t[k])dp[j + 1][k + 1] = dp[j][k] + 1;
				else dp[j + 1][k + 1] = std::max(dp[j][k + 1], dp[j + 1][k]);
			}
		}
		std::cout << dp[s.size()][t.size()] << std::endl;
	}
}
