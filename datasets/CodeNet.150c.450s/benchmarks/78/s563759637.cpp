#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <map>
using namespace std;

#define REP(i, s, e) for (int i = (s); i < (e); i++)
#define REPI(i, s, e) for (int i = (s); i <= (e); i++)
#define rep(i, n) REP(i, 0, n)
#define repi(i, n) REPI(i, 0, n)
#define ALL(v) (v).begin(), (v).end()

#define dump(x) (cout << #x << " = " << x << endl)
#define dump2(x, y) (cout << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")" << endl)
#define dump3(x, y, z) (cout << "(" << #x << ", " << #y << ", " << #z << ") = (" << x << ", " << y << ", "<< z << ")" << endl)

typedef long long ll;
typedef pair<int, int> pii;

int n;

#define MAX 1000000
vector<int> tri;

int dp[MAX];
int odd_dp[MAX];

void gentri()
{
	for (int i = 1;; i++) {
		int t = i*(i+1)*(i+2)/6;
		if (t >= MAX) break;
		tri.push_back(t);
	}
}

int main(void)
{
	gentri();

	dp[0] = 0;
	odd_dp[0] = 0;
	for (int i = 1; i < MAX; i++) {
		dp[i] = i;
		odd_dp[i] = i;
		
		rep(j, tri.size()) {
			int t = i-tri[j];
			if (t < 0) break;
			dp[i] = min(dp[i], dp[t]+1);

			if (tri[j]%2!=0)
				odd_dp[i] = min(odd_dp[i], odd_dp[t]+1);
		}
	}
	
	while(cin >> n, n) {
		cout << dp[n] << " " << odd_dp[n] << endl;
	}
	return 0;
}