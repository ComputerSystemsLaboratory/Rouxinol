#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,b) FOR(i,0,b)
#define BE(c) c.begin(),c.end()
#define PB push_back
#define F first
#define S second
#define BEB(s) s
using namespace std;
int main(){
	int n,d[5001];
	while(1){
		cin>>n;
		if(n==0)break;
		d[0]=0;
		FOR(i,1,n+1){
			int a;
			cin>>a;
			d[i]=d[i-1]+a;
		}
		int ans=INT_MIN;
		FOR(i,1,n+1)REP(j,i)ans=max(ans,d[i]-d[j]);
		cout<<ans<<endl;
	}
	return 0;
}