#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define INF 100000000
#define EPS 1e-10
#define MOD 1000000007
using namespace std;
typedef pair<int,int> P;

int n, m;
P x[10000];

void solve(){
	rep(i,n) cin >> x[i].second >> x[i].first;
	sort(x,x+n,greater<P>());
	int ans = 0;
	rep(i,n){
		if(m >= x[i].second){
			m -= x[i].second;
		} else{
			x[i].second -= m;
			m = 0;
			ans += x[i].second*x[i].first;
		}
	}
	cout << ans << endl;
}

int main(){
	while(cin >> n >> m){
		if(n == 0 && m == 0) break;
		solve();
	}
}