#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <ctype.h>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define all(v) (v).begin(), (v).end()
#define rev(s) (s).rbegin(), (s).rend()
#define MP make_pair
#define X first
#define Y second

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<double, double> dP;

const int INF = 1000000000;
const double EPS = 1e-10;


int num[105];

ll solve(int n){
	vector<vector<ll> > dp(105, vector<ll>(21, 0));
	dp[0][num[0]] = 1;
	rep(i, n){
		rep(j, 21){
			ll m = 0;
			if(j-num[i+1] >= 0) m = dp[i][j-num[i+1]];
			ll p = 0;
			if(j+num[i+1] <= 20)p = dp[i][j+num[i+1]];
			dp[i+1][j] = m+p;
		}
	}

	return dp[n-1][0];
}

int main(){
	int n;
	cin >> n;

	rep(i, n){
		cin >> num[i];
	}

	cout << solve(n) << endl;

	return 0;
}