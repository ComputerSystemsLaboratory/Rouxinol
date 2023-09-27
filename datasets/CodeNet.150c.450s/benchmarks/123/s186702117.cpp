#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;

bool prime(ll x) {
	bool pr = true;
	if (x > 2 && x % 2 == 0) pr = false;
	if (x % 2 != 0) {
		for(int i=3;i<=sqrt(x);i+=2) {
			if (x%i == 0) {
				pr = false;
				break;
			}
		}
	}
	return pr;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];
	int res = 0;
	REP(i, n)if (prime(a[i])) res++;
	cout << res << "\n";

	return 0;
}
