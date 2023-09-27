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
		int N=read(),A=read(),B=read(),C=read(),X=read();
		if(N||A||B||C||X){
			int Y[N];
			REP(i,N){
				Y[i]=read();
			}
			
			int frame = 0;
			int reel = 0;
			while(true){
				if(Y[reel] == X) reel++;
				if(reel == N) break;
				X = (A*X+B)%C;
				frame++;
				if(frame > 10000){
					frame = -1;
					break;
				}
			}
			cout << frame << endl;
		}
		else break;
	}
	return 0;
}