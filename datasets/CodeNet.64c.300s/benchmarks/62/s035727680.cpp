#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<map>
#include<set>
#include<bitset>
#include<vector>
#include<stack>
#include<queue>
#include<functional>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
//Library
/*Union-Find木
int par[1000010], rankh[1000010];
void init(int n) {
	for (int i = 0; i <= n; i++) {
		par[i] = i;
		rankh[i] = 0;
	}
}
int find(int x) {
	if (par[x] == x)return x;
	else return par[x] = find(par[x]);
}
void unite(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y)return;
	if (rankh[x] < rankh[y])par[x] = y;
	else {
		par[y] = x;
		if (rankh[x] == rankh[y])rankh[x]++;
	}
}
bool same(int x, int y) {
	return find(x) == find(y);
}
template<typename t>
t GCD(t a, t b) {
	while (max(a, b) % min(a, b)) {
		if (a > b)a %= b;
		else b %= a;
	}
	return min(a, b);
}
Union-Find木end*/
//Library end
int a[100][100], b[100], ans;
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)cin >> a[i][j];
	}
	for (int i = 0; i < m; i++)cin >> b[i];
	for (int i = 0; i < n; i++) {
		ans = 0;
		for (int j = 0; j < m; j++) {
			ans += a[i][j] * b[j];
		}
		cout << ans << endl;
	}
	return 0;
}
