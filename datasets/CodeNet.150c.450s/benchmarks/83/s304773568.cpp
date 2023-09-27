#include <algorithm>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <functional>
#include <cassert>
#include <iomanip>
#include <array>
#include <time.h>
#include <limits.h>
#pragma comment(lib, "winmm.lib")
#define debug(x) cout<<#x<<": "<<x<<endl
#define rep(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<=(b);i++)
using namespace std;

vector<int> W(101);
vector<int> V(101);
int n, sum;
int memo[101][10001];

int dp(int x, int w){
	if (memo[x][w] != -1) return memo[x][w];

	if (x == n) return 0;
	if (w - W[x] < 0) return dp(x + 1, w);

	return memo[x][w] = max(dp(x + 1, w), dp(x + 1, w - W[x]) + V[x]);
}

void solve(){
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif


	cin >> n >> sum;
	rep(i, n) cin >> V[i] >> W[i];
	rep(i, 101) rep(j, 10001) memo[i][j] = -1;
	
	cout << dp(0, sum) << endl;

}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	solve();
	return 0;
}