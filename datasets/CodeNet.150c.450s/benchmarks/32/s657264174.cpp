#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<(S)<<endl
#define ck(a,b) (0<=(a)&&(a)<(b))
using namespace std;

int main(){
	int m,nmin,nmax;
	while(cin>>m>>nmin>>nmax,m){
		int P[201];
		int maxg=0;
		int ans;
		REP(i,0,m) cin>>P[i];
		REP(i,nmin,nmax+1){
			int gap=P[i-1]-P[i];
			if(gap>=maxg){
				maxg=gap;
				ans=i;
			}
		}
		p(ans);
	}
	return 0;
}