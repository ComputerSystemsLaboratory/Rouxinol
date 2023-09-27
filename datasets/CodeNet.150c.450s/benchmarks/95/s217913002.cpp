#include <iostream>
#include <string>

#define rep(i,n) for(int i=0; i<(n); i++)

using namespace std;

int T;
void solve(){
	int ans=0;
	char st[256]={};
	rep(i,T){
		string s;
		cin >> s;
		st[ (int)s[0] ] = s[1];
		if( ans%2 == 0 ){
			if( st['l'] == 'u' && st['r'] == 'u' ){
				ans++;
			}
		}else{
			if( st['l'] == 'd' && st['r'] == 'd' ){
				ans++;
			}
		}
	}
	cout << ans << endl;
}

int main(){
	while(cin>>T, T){
		solve();
	}
	return 0;
}