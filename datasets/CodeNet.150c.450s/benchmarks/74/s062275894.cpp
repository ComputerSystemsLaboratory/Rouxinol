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

vector<int> C(100);
int dp[101][100001] = { 1 << 20 };

void Hoge(){
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif

	int n, sum;

	cin >> sum >> n;
	rep(i, n) cin >> C[i + 1];

	rep(i, n + 1) dp[i][0] = 0;
	rep(i, sum + 1) dp[0][i] = 1 << 20;

	FOR(i,1, n){
		FOR(j, 1, sum){
			
			if (j - C[i] >= 0) dp[i][j] = min(dp[i - 1][j], dp[i][j - C[i]] + 1);
			else dp[i][j] = dp[i - 1][j];
		}
	}

	
	cout << dp[n][sum] << endl;

}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	Hoge();
	return 0;
}