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

int dp[100001];
int a[100001];

const int INF = 1000000000;

int main(){
	
	int n;
	cin >> n;

	fill_n((int *)dp,sizeof(dp)/sizeof(int),INF);
	
	rep(i,n) cin >> a[i];

	rep(i,n){
		*lower_bound(dp,dp+n,a[i])=a[i];	
	}

	cout << lower_bound(dp,dp+n,INF)-dp << endl;

	return 0;
}