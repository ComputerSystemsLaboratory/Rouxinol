#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdio>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <utility>
#include <fstream>
//#include <random>
#include <map>
//#include <unordered_map>
#include <cstdlib>
#include <functional>
#include <time.h>
//#include <chrono>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <iostream>
#include <limits>
#include <numeric>
//#include <type_traits>
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define INF 1000000001
#define MOD 1000000007
#define SORT(s) sort(s.begin(), s.end());
#define REVERSE(s) reverse(s.begin(), s.end());
#define SUM(s) accumulate(s.begin(), s.end(), 0LL);
#define P pair<int,int>
#define mp make_pair
#define valid(x,y,h,w) (0<=x&&x<h&&0<=y&&y<w)
//#define int ll
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int ndx[8] = { 0,1,0,-1, 1,1,-1,-1 };
int ndy[8] = { 1,0,-1,0, 1,-1,-1,1 };
using namespace std;
int POW(int x, int y) { return int(pow(double(x), double(y))); }
double log(double a, double b) { return log(b) / log(a); }




int main() {
	int n;
	cin >> n;
	vector<int> a(n), dp(n+1);

	rep(i, n) {
		cin >> a[i];
		dp[i + 1] = INF;
	}


	dp[0] = -1;
	int ans = 0;

	rep(i, n) {
		int t = a[i];

		vector<int>::iterator it = lower_bound(dp.begin(), dp.end(), t);
		if (it == dp.begin()) {
			continue;
		}
		it--;
		int index = it - dp.begin();

		if (index + 1 < n+1) {
			dp[index + 1] = min(t, dp[index + 1]);
			ans = max(ans, index + 1);
		}

	}


	cout << ans << endl;




}



