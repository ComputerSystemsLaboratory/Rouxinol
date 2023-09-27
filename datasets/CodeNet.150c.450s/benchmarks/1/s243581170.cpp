#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

const int MAX_N = 100100;
const int INF = INT_MAX / 2;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);	
	for(int i = 0; i < N; ++i) {
		cin >> A[i];	
	}

	int dp[MAX_N]; //??????n??????????¢??????¨??????????????£?????????????°?????????????????´?
	fill_n((int *)dp, MAX_N, INF);	

	dp[0] = -1;
	for(int i = 0; i < N; ++i) {
		int j = lower_bound(dp, dp+N, A[i]) - dp;	
		dp[j] = A[i];	
	}

	int ans = 1;
	for(int i = 1; i <= N; ++i) {
		if(dp[i] != INF) ans = i;		
	}
	cout << ans << endl;
	return 0;
}