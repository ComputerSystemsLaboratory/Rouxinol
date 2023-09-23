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
		int x=read(),y=read(),s=read();
		if(x||y||s){
			int ans=0;
			for(int i=1;i<s;i++){
				for(int j=1;j<s;j++){
					if(i*(100+x)/100+j*(100+x)/100 == s){
						ans = max(ans,i*(100+y)/100+j*(100+y)/100);
					}
				}
			}
			cout << ans << endl;
		}
		else return 0;
	}
}