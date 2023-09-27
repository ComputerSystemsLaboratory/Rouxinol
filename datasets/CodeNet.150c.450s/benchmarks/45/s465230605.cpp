#include<bits/stdc++.h>
#define INF 2147483647
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;
int main() {
	

	lli	 m,n; cin >> m >> n;
	lli ans = 1;
	while(n != 1) {
		if (n % 2 != 0) {
			ans = ans * m % MOD;
			n--;
		}
		m = m * m % MOD;
		n /= 2;
	}

	cout << ans * m % MOD << endl;
	return 0;
}