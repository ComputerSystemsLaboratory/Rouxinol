#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;
int c[3000010];
int main(){
	int N,M;
	while(cin>>N>>M&&N){
		int h[1503],w[1503];
		int ans=0;
		REP(i,0,3000010) c[i]=0;
		h[0]=w[0]=0;
		REP(i,1,N+1) {
			cin>>h[i];
			h[i]+=h[i-1];
		}
		REP(i,1,M+1){
			cin>>w[i];
			w[i]+=w[i-1];
		}
		REP(i,0,N+1) REP(j,0,M+1) c[h[i]-w[j]+1500000]++;
		REP(i,0,3000010) 	ans+=c[i]*(c[i]-1)/2;
		p(ans);
	}
	return 0;
}