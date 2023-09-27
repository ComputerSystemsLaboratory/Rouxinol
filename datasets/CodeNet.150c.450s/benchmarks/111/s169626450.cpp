#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;
double EPS=1e-8;
int INF = 1e9;
ll dp[21][100];
int main(){
	int n,a[100];
	cin>>n;
	REP(i,n)cin>>a[i];
	memset(dp,0,sizeof(dp));
	dp[a[0]][0]=1;
	for(int i=1;i<n-1;i++){
		for(int j=0;j<=20;j++){
			if(j+a[i]<=20)dp[j+a[i]][i]+=dp[j][i-1];
			if(j-a[i]>=0)dp[j-a[i]][i]+=dp[j][i-1];
		}
	}
	cout<<dp[a[n-1]][n-2]<<endl;
}