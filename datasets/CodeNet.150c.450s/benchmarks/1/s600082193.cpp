#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
typedef long long ll;
#define INF ((int)1e9+1)

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &e : a)cin >> e;
	vector<ll> dp(n,INF);
	for(int i = 0; i < n; i++){
		*lower_bound(ALL(dp), a[i]) = a[i];
	}
	cout << distance(dp.begin(), lower_bound(ALL(dp),INF)) << endl;
	return 0;
}

