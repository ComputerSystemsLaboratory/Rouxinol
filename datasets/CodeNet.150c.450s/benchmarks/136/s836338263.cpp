#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cstring>
#include <climits>
#include <cmath>
#include <queue>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<ll, int> ll_i;
struct edge { int u, v; ll w; };

ll gcd(ll a, ll b) {
	if (b == 0) return abs(a);
	else return gcd(b, a % b);
}

int main() {
	ll a, b;
	while (cin >> a >> b) {
		ll x = gcd(a, b);
		cout << x << " " << a * b / x << endl;
	}
}