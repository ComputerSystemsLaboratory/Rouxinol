#include <bits/stdc++.h>

#define FOR(i, a, b) for(long long int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 1000000000 //2000000000
#define LLINF 1000000000000000000 //9000000000000000000
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair< long long int, long long  int> P;

int main(void) {
	int n;
	int y[101];
	int m[101];
	int d[101];
	int res[101] = {};

	cin >> n;
	FOR(i, 1, n) {
		cin >> y[i] >> m[i] >> d[i];
	}
	FOR(i, 1, n) {
		FOR(t, y[i] + 1, 999) {
			if (t % 3 == 0) {
				res[i] += 200;
			}
			else {
				res[i] += 195;
			}
		}
		if (y[i] % 3 == 0) {
			res[i] += (10 - m[i]) * 20;
			res[i] += (20 - d[i]);
		}
		else {
			if (m[i] % 2==0) {
				res[i] += (19 - d[i]);
			}
			else {
				res[i] += (20 - d[i]);
			}
			FOR(u, m[i] + 1, 10) {
				if (u % 2 == 0) {
					res[i] += 19;
				}
				else {
					res[i] += 20;
				}
			}
		}
		res[i]++;
	}
	FOR(i, 1, n) {
		cout << res[i] << endl;
	}
}
