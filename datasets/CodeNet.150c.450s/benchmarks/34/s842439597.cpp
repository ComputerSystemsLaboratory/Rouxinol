#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <cctype>
#include <sstream>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <complex>
using namespace std;
#define REP(i,n) for(int i = 0; i < (int)n; i++)
#define FOR(i,a,b) for(int i = a; i < (int)b; i++)
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
const int INF = 1<<28;
const ll MOD = 1000000007;

int main() {
	ll dp[35] = {};
	dp[0] = 1;
	REP(i, 30) {
		dp[i+1] += dp[i];
		dp[i+2] += dp[i];
		dp[i+3] += dp[i];
	}
	int n;
	while(cin >> n, n)
		cout << dp[n] / 3650 + 1 << endl;
	return 0;
}