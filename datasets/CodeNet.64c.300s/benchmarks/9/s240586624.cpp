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
	int now = 100000;
	rep(i, 0, n){
		now += now / 20;
		now = (now + 999) / 1000;
		now *= 1000;
	}
	cout << now << endl;
}