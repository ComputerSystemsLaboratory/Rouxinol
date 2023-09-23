#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

int main() {
	int n; cin >> n;
	ll ans = 1;
	for (int i = 1; i <= n; i++) {
		ans *= i;
	}
	cout << ans << endl;
	return 0;
}