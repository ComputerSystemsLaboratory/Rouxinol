#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define int ll

#define FOR(i,a,b) for(int i=int(a);i<int(b);i++)
#define REP(i,b) FOR(i,0,b)

int read(){
	int i;
	scanf("%lld",&i);
	return i;
}
int h[1500+1],w[1500+1];
signed main(){
	bool flag=false;
	while(true){
	int N=read(),M=read();
	if(N==0&&M==0) break;
	int maxh=0,maxw=0;
	REP(i,N){
		h[i]=read();
		maxh+=h[i];
	}
	REP(i,M){
		w[i]=read();
		maxw+=w[i];
	}
	
	int MIN=min(maxh,maxw);
	
	int cntH[maxh+1],cntW[maxw+1];
	
	REP(i,MIN+1){
		cntH[i]=0;
		cntW[i]=0;
	}
	
	int length;
	REP(i,N){
		length=0;
		FOR(j,i,N){
			length+=h[j];
			cntH[length]++;
		}
	}
	
	REP(i,M){
		length=0;
		FOR(j,i,M){
			length+=w[j];
			cntW[length]++;
		}
	}
	int ans=0;
	FOR(i,1,MIN+1) ans += cntH[i]*cntW[i];
	
	cout << ans << endl;
	}
}