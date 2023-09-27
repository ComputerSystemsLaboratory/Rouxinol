#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cstdio>
#define F(i,n) for(int i=0;i<(int)(n);i++)
#define INF 100000000
#define ll long long

using namespace std;
typedef pair<int, int> P;

int main() {
	ll n, m, d,p[10],q,ans;
	while (1) {
		ans = 0;
		cin >> n >> m;
		if (n == 0 && m == 0)break;
		F(i, 10) {
			p[i] = 0;
		}
		F(i, n) {
			cin >> d >> q;
			p[q-1] += d;
		}
		for (int i = 9; i >= 0; i--) {
			if (m - p[i] < 0) {
				p[i] = p[i] - m;
				m = 0;
			}
			else {
				m -= p[i];
				p[i] = 0;
			}
		}
		F(i, 10) {
			ans += p[i]*(i+1);
		}
		cout << ans << endl;
	}
	return 0;
}