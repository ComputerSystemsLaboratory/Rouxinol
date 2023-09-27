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

signed main(){
	while(true){
		int N=read();
		if(N==0) break;
		int a[N];
		int minimum=100000000;
		REP(i,N){
			a[i]=read();
		}
		sort(a,a+N);
		REP(i,N-1){
			minimum = min(a[i+1]-a[i],minimum);
		}
		cout << minimum<<endl;
	}
}