#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <map>
#include <set>
#include <bitset>
#include <limits>
typedef long long ll;
const int MOD = 1000000007;
const ll INF = 1234567890123456;

#define REP(i,n)   for(int i=0; i<(int)(n); ++i)
#define FOR(i,b,e) for(int i=(b); i<=(int)(e); ++i)

#define in cin
#define out cout
#define pb push_back
using namespace std;

vector<ll>a;
int dp[1000000], oddp[1000000];

int main(){
	int n;

	REP(i,1000000) {
		dp[i] = i;
		oddp[i] = i;
	}
	int c=0;
	for (int a = 2;  c<1000000; ++a) {
		c = (a*(a + 1)*(a + 2)) / 6;
		if (c > 1000000)break;
		for (int i = 0; i <= 1000000; ++i) {
			if (i - c < 0)continue;

			dp[i] = min(dp[i], dp[i - c] + 1);
			if (c % 2 == 1) {
				oddp[i] = min(oddp[i], oddp[i - c] + 1);
			}
		}

	}
	while (in >> n) {
		if (!n) break;
		out << dp[n] << ' ' << oddp[n] << endl;
	}
	return 0;

}