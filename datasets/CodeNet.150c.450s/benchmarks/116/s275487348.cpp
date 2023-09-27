#include <bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 100000005
#define MAX 100004
using namespace std;

ll a[MAX];
int main(){
	int n, k;
	while(cin >> n >> k, n){
		ll ans = 0;
		a[0] = 0;
		for(int i = 1;i <= n;i++)cin >> a[i];
		for(int i = 2;i <= n;i++)a[i] += a[i-1];
		for(int i = k;i <= n;i++){
			ans = max(ans, a[i]-a[i-k]);
		}
		//for(int i = 1;i <= n;i++)cout << a[i] << " ";
		//cout << endl;
		cout << ans << endl;
	}
	return 0;
}