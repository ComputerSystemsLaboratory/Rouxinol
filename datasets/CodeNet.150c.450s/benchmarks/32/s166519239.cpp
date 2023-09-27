#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <stack>
#include <map>
#define rep(i,n) for(long long i = 0; i < n; i++)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
ll MOD = 1000000007;

int m, n1, n2;
int p[200];

void solve(){
	rep(i,m) cin >> p[i];
	sort(p,p+m,greater<int>());
	int ans = 0;
	int gap = 0;
	for(int i = n1-1; i < n2; i++) if(gap <= p[i]-p[i+1]){ gap = p[i]-p[i+1]; ans = i+1; }
	cout << ans << endl;
}

int main(){
	while(cin >> m >> n1 >> n2){
		if(m == 0 && n1  == 0 && n2 == 0) break;
		solve();
	}	
}