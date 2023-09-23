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
	int n, m, p, x[110], ans,all;
	while (1) {
		all = 0;
		cin >> n >> m >> p;
		if (n == 0 && m == 0 && p == 0) {
			break;
		}
		F(i, n) {
			cin >> x[i];
			all += x[i];
		}
		if (x[m - 1] == 0) {
			cout << 0 << endl;
			continue;
		}
		else {
			ans = all*(100-p) / x[m - 1];
			cout << ans << endl;
		}
	}
	return 0;
}