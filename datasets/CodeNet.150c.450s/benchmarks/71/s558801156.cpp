#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
	int n;
	while(cin >> n){
		int ans = 0;
		rep(i, 0, 10){
			rep(j, 0, 10){
				rep(k, 0, 10){
					rep(l, 0, 10){
						if(i + j + k + l == n) ans++;
					}
				}
			}
		}
		cout << ans << endl;
	}
}