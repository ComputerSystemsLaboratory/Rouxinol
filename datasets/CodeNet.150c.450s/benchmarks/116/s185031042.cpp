#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int n, k;
	while(cin >> n >> k) {
		if(n == 0 && k == 0) break;

		vector<int> v(n);
		rep(i, n) cin >> v[i];

		int l = v[0], a = 0;
		rep(i, k) a += v[i];

		ll ans = a;
		REP(i, k, n) {
			a -= l;
			a += v[i];

			ans = max(ans, (ll)a);
			l = v[i - k + 1];
		}

		cout << ans << endl;
	}

	return 0;
}