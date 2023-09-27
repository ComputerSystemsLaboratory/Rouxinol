#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <cstring>
#include <sstream>
#include <iomanip>//小数精度 	cout << fixed << setprecision(5) << tmp << endl;
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define All(X)      (X).begin(),(X).end()

int n,w;
int dp[101][100001];
int val[101];
int wei[101];
int rec(int i,int j){
	if(dp[i][j] >= 0) return dp[i][j];
	int res;
	if(i==n){
		res = 0;
	}else if(j<wei[i]){
		res = rec(i+1,j);
	}else{
		res = max(rec(i+1,j),rec(i+1,j-wei[i]) + val[i]);
	}
	return dp[i][j] = res;
}

int main(){

	cin >> n >> w;
	REP(i,n) cin >> val[i] >> wei[i];

	memset(dp,-1,sizeof(dp));
	cout << rec(0,w) <<endl;
	return 0;
}