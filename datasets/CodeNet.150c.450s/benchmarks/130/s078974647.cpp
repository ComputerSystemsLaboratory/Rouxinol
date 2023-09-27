#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,to) for(int i=x;i<to;i++) 
 
int main() {
	int n,m,a[100][100]={},b[100]={};
	cin >> n >> m;
	rep(i,0,n){
		rep(j,0,m){
			cin >> a[i][j];
		}
	}
	rep(i,0,m) cin >> b[i];
	rep(i,0,n){
		int ans = 0;
		rep(j,0,m){
			ans = ans+a[i][j]*b[j];
		}
		cout << ans <<endl;
	}
	return 0;
}
