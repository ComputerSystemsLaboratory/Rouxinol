#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define INF (1<<30)
#define INFLL (1ll<<60)
typedef pair<ll, ll> P;
#define MOD (1000000007ll)

int main(void){
	int m,l,r,p[222],ans,mx,i;
	cin >> m >> l >> r;
	while(m || l || r){
		mx = 0;
		for(i=0; i<m; ++i){
			cin >> p[i];
		}
		for(i=l; i<=r; ++i){
			if(mx <= p[i-1] - p[i]){
				mx = p[i-1] - p[i];
				ans = i;
			}
		}
		cout << ans << endl;
		cin >> m >> l >> r;
	}
}
