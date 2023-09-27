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
int main() {
	string w, t;
	int ans = 0;
	cin >> w >> t;
	while (t != "END_OF_TEXT") {
		for (int i = 0; i < t.size(); i++) {
			t[i] = tolower(t[i]);
		}
		if (w == t)ans++;
		cin >> t;
	}
	cout << ans << endl;
	return 0;
}
