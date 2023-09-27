#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define MOD 1000000007LL
#define REP(i, n) for(int i=0;i<(n);++i)
typedef long long ll;

signed main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n; cin >> n;
	int tmp = n;
	cout << n << ':';
	for(int i = 2; i*i <= tmp; i++){
		int cnt = 0;
		while(n % i == 0){
			cnt++; n /= i;
		}
		if(cnt > 0){
			REP(j, cnt) cout << ' ' << i;
		}
	}
	if(n != 1) cout << ' ' << n;
	cout << endl;

	return 0;
}

