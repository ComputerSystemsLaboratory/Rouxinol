#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;


int main(){
	int N,M;
	while(cin>>N>>M&&N){
		int h[1501],w[1501];
		map<int,int> allh,allw;
		int ans=0,mx=0,k;
		REP(i,0,N){
			cin>>h[i];
			k=0;
			for(int j=i;j>=0;j--){
				k+=h[j];
				allh[k]++;
			}
		}
		mx=max(mx,k);
		REP(i,0,M){
			cin>>w[i];
			k=0;
			for(int j=i;j>=0;j--){
				k+=w[j];
				allw[k]++;
			}
		}
		mx=max(mx,k);
		REP(i,1,mx+1){
			ans+=allh[i]*allw[i];
		}
		p(ans);
	}

	return 0;
}