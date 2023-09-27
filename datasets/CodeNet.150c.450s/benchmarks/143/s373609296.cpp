#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <bitset>
#include <stack>
#include <deque>
#include <set>
#include <unordered_set>
#include <list>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <climits>
#include <ctime>
#include <random>
#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define eps 1e-9
#define inf 0x3f3f3f3f
#define mod 1000000007
using namespace std;

int main() {
	speed;
	int n, a, b, c;
	cin >> n;
	map<int, int>m;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		m[a]++;
	}
	ll ans = 0;
	for (auto i : m)
		ans += i.second * 1ll * i.first;
	int q;
	cin >> q;
	for (int t = 0; t < q; ++t) {
		cin >> b >> c;
		ans -= m[b] * b;
		ans += m[b] * c;
		m[c] += m[b];
		m[b] = 0;
		cout << ans << '\n';
	}
}