#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define INF (1<<30)
#define INFLL (1ll<<60)
typedef pair<int, int> P;
typedef pair<int, P> E;
#define MOD (1000000007ll)
#define l_ength size

void mul_mod(ll& a, ll b){
	a *= b;
	a %= MOD;
}

void add_mod(ll& a, ll b){
	b += MOD;
	a += b;
	a %= MOD;
}

int main(void){
	int n,i,a[1111],ans;
	cin >> n;
	while(n){
		ans = INF;
		for(i=0; i<n; ++i){
			cin >> a[i];
		}
		sort(a,a+n);
		for(i=1; i<n; ++i){
			ans = min(ans,a[i]-a[i-1]);
		}
		cout << ans << endl;
		cin >> n;
	}
	return 0;
}

