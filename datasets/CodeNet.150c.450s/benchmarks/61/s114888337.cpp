#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<climits>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<bitset>
#include<iomanip>
using namespace std;

#define rep(i,j,n) for(int i=(j);i<(n);i++)
#define rep2(i,j,n) for(int i=(j);i<=(n);i++)
#define all(i) i.begin(),i.end()
#define INF 1e9

typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef vector<vector<string>> vvs;
typedef pair<int, int> pi;
typedef long long i64;

int main() {
	while (1) {
		int n, a, b, c, x;
		cin >> n >> a >> b >> c >> x;
		if (n == 0) return 0;
		vi y(n);
		int ans = 0;
		rep(i, 0, n) {
			cin >> y[i];
			while (y[i] != x) {
				x = (a*x + b) % c;
				ans++;
				if (ans > 10000) break;
			}
			if (i + 1 != n) {
				x = (a*x + b) % c;
				ans++;
			}
		}
		if (ans > 10000) cout << -1 << endl;
		else cout << ans << endl;
	}
}

