#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define POL_MAX 200
#define N_MAX 1000000
using namespace std;

int N;
int dp[N_MAX+1];
int odd_dp[N_MAX+1];
const int INF = INT_MAX / 3;

int main(){

	int n=1;
	int value=0;
	vector<int> pol, kisu_pol;
	while(true) {
		value = n*(n+1)*(n+2) / 6;
		if (value >= N_MAX) { break; }
		pol.push_back(value);
		if (value % 2 != 0) { kisu_pol.push_back(value); }
		n++;
	}

	rep(j, N_MAX+1) { dp[j] = j; }
	REP(j, 1, N_MAX+1) {
		REP(i, 1, pol.size()) {
			if(j<pol[i]) break;
			dp[j] = min(dp[j], dp[j-pol[i]] + 1);
		}
	}
	
	rep(j, N_MAX+1) { odd_dp[j] = j; }
	REP(j, 1, N_MAX+1) {
		REP(i, 1, kisu_pol.size()) {
			if(j<kisu_pol[i]) break;
			odd_dp[j] = min(odd_dp[j], odd_dp[j-kisu_pol[i]] + 1);
		}
	}
	
	while(cin >> N) {
		if (N == 0) { break; }
		cout << dp[N] << " " << odd_dp[N] << endl;
	}

	return 0;
}