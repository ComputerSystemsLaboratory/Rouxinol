#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;
int allh[1500010],allw[1500010];
int main(){
	int N,M;
	while(cin>>N>>M&&N){
		int h[1501],w[1501];
		REP(i,0,1500010) allh[i]=allw[i]=0;
		int ans=0,k;
		REP(i,0,N){
			cin>>h[i];
			k=0;
			for(int j=i;j>=0;j--){
				k+=h[j];
				allh[k]++;
			}
		}
		REP(i,0,M){
			cin>>w[i];
			k=0;
			for(int j=i;j>=0;j--){
				k+=w[j];
				allw[k]++;
			}
		}
		REP(i,0,1500010){
			ans+=allh[i]*allw[i];
		}
		p(ans);
	}

	return 0;
}