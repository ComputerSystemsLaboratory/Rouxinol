#define	_USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <set>
#include <complex>
#include <utility>
#define  rep(i,n) for(int i=0;i<(n);i++)
#define  REP(i,n) for(int i=1;i<(n);i++)
#define  rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define  VI	vector<int>
#define	 VS vector<string>
#define  all(a) (a).begin(),(a).end()
#define  debug(x) cout<<#x<<": "<<x<<endl
using namespace std;
typedef pair<int,int> P;

const int INF=1000000;
char field[101][101];
int d[101][101];
int N,M;
int sx,sy;
int gx,gy;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

const int MAX_N=1000;

int main(){
	
	int n,w;
	
	cin>>n>>w;
	
	vector<int> c(n);
	vector<int> we(n);
	vector< vector<int> > dp(n+1,vector<int>(w+1));
	
	rep(i,n)	
		cin>>c[i]>>we[i];
	
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=w;j++){
		if(j<we[i])
			dp[i][j]=dp[i+1][j];
		else 
		dp[i][j]=max(dp[i+1][j],dp[i+1][j-we[i]]+c[i]);
		}
	}
	
	cout<<dp[0][w]<<endl;
	
	
	
	
}