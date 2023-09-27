//????????°??????
#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

int main(){
	int n;
	cin>>n;
	vector<vector<int> > Adj(n, vector<int>(n, 0));
	REP(i,n){
		int u,k;
		cin>>u>>k;
		REP(j,k){
			int l;
			cin>>l;
			//u==j+1??§??????
			Adj[u-1][l-1]=1;
		}
	}
	REP(i,n){
		REP(j,n-1){
			cout<<Adj[i][j]<<" ";
		}
		cout<<Adj[i][n-1]<<endl;
	}
	return 0;
}