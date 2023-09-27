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

int dp[1001][1001];//from,to

const int INF=1<<28;

int main(){

	string from,to;
	cin >> from >> to;

	fill_n((int *)dp,sizeof(dp)/sizeof(int),0);
	rep(i,from.size()+1) dp[0][i]=i;
	rep(i,to.size()+1) dp[i][0]=i;

	for(int i=1;i<=to.size();i++){
		for(int j=1;j<=from.size();j++){	
			if(to[i-1]==from[j-1]){
				dp[i][j] = min(dp[i-1][j] + 1, min(dp[i][j-1] + 1, dp[i-1][j-1] + 0));
			}else{
				dp[i][j] = min(dp[i-1][j] + 1, min(dp[i][j-1] + 1, dp[i-1][j-1] + 1));
			}
		}
	}


	cout << dp[to.size()][from.size()] << endl;

	return 0;
}