//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0118
#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<int(n);i++)
int r,cl;//v,h
char a[10000];
void dp(int v, int h, char c){
	if(v>=r||v<0) return ;
	if(h>=cl||h<0) return ;
	if(a[v*cl+h]!=c) return ;
	a[v*cl+h]='0';
	dp(v-1,h,c);
	dp(v+1,h,c);
	dp(v,h-1,c);
	dp(v,h+1,c);
	return ;
}
int main(){
	cin>>r>>cl;
	while(r&&cl){
		forn(i,r){
				forn(j,cl) cin>>a[i*cl+j];
			}
			int ans=0;
			forn(i,r)
				forn(j,cl){
					if(a[i*cl+j]!='0'){
						dp(i,j,a[i*cl+j]);
						ans++;
					}
			}
			cout<<ans<<endl;
			cin>>r>>cl;
	}
	return 0;
}