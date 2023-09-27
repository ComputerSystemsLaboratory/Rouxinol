#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
#include<string>
#include<set>
#include<array>
#include<cassert>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i);

using namespace std;

const int MAX=101;
const int INF=1<<29;

int dp[MAX][MAX];
int n;
int c[MAX];
int r[MAX];

int main(){

	fill_n((int *)dp,sizeof(dp)/sizeof(int),INF);
	fill_n((int *)r,sizeof(r)/sizeof(int),0);
	fill_n((int *)c,sizeof(c)/sizeof(int),0);

	cin >> n;

	rep(i,n){
		cin >> r[i] >> c[i];	
	}

	rep(i,n){
		dp[i][i+1] = 0;
	}

	for(int R=2;R<=n;R++){
		for(int L=0;L+R-1<n;L++){
			for(int M=L+1;M<=L+R-1;M++){
				dp[L][L+R] = min(dp[L][L+R],dp[L][M] + dp[M][L+R] + (r[L] * c[M-1] * c[L+R-1]));
			}
		}
	}

	cout << dp[0][n] << endl;

}