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
		int e=read();
		int ans=100000;
		int m;
		if(e==0) break;
		int z,y,x;
		for(z=1;z*z*z<e;z++){
		}
		for(y=1;y*y<e;y++){
		}
		for(int i=0;i<=z;i++){
			for(int j=0;j<=y;j++){
				if(e-i*i*i-j*j >= 0){
					x = e-i*i*i-j*j;
					ans = min(ans,x+j+i);
				}
			}	
		}
		
		cout << ans << endl;
		
	}
	
}