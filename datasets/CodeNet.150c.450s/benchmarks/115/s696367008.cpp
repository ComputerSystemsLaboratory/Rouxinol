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

const int MAX=1001;
const int INF=1<<29;

int dp[MAX][MAX];

int main(){

	int n;
	cin >> n;

	rep(i,n){
		string a,b;
		cin >> a >> b;
	
		fill_n((int *)dp,sizeof(dp)/sizeof(int),0);
		
		rep(i,a.size()+1){
			rep(j,b.size()+1){
				if(i==0||j==0) dp[i][j]=0;
				else if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
				else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		
		}

		cout << dp[a.size()][b.size()] << endl;
	
	}

}