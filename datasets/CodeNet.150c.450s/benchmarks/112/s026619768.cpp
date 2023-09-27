#include <iostream>
#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define ALL(c) (c).begin(),(c).end()
char s[10000],t[10000];
int main(){
	while(true){
		int n;
		cin >> n;
		if(!n) break;
		rep(i,n) cin >> s[i] >> t[i];
		int m;
		cin >> m;
		rep(i,m){
			char c,ans;
			cin >> c;
			ans=c;
			rep(i,n) if(c==s[i]) ans=t[i];
			cout << ans;
		}
		cout << endl;
	}
	return 0;
}