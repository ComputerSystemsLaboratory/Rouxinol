#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
	int n;
	cin >> n;
	rep(i, 0, n){
		int a[3];
		rep(j, 0, 3) cin >> a[j];
		sort(a, a + 3);
		if(a[0] * a[0] + a[1] * a[1] == a[2] * a[2]){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}