#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
	int a, b;
	while(cin >> a >> b){
		a = a + b;
		int ans = 0;
		while(a){
			a /= 10;
			ans++;
		}
		cout << ans << endl;
	}
}