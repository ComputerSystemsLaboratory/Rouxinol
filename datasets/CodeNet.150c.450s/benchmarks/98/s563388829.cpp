#include <iostream>

#define rep(i,n) for(int i=0; i<(n); i++)

using namespace std;

	int n, m;
int s[205];
void solve(){
		rep(i,n) rep(j,m){
			int sum=0;
			rep(k,n+m){
				if( k != i && ( k<n || k == n+j ) ){
					sum += s[k];
				}else{
					sum -= s[k];
				}
			}
			if( sum == 0 ){
				cout << s[i] << " " << s[n+j] << endl;
				return;
			}
		}
		cout << -1 << endl;
}

int main(){
	while(cin>>n>>m, n|m){
		rep(i,n+m) cin >> s[i];
		solve();
	}
	return 0;
}