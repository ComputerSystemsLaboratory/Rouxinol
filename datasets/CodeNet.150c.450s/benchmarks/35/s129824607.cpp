#include <iostream>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <sstream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <complex>
#include <vector>
#include <cstdio>
#include <cmath>
#include <time.h>
#include <tuple>
#define all(c) ((c).begin(),(c).end())
#define rall(c) ((c).rbegin(),(c).rend())
//#define sort(v,n) sort(v,v+n)
#define ll long long
#define fi first
#define se second
#define inf 999999999
using namespace std;
const ll MOD = 1e9 + 7;
const double PI = acos(-1.0);
//---------------------------------------------------------------------------------------------//
int n;

int main() {
	while (cin >> n, n) {
		int a[5001];
		ll s[5001];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (i == 0) {
				s[0] = a[0];
			}
			else {
				s[i] = s[i - 1] + a[i];
			}
		}

		ll ans=-500000000;
		for (int i = 0; i < n; i++) {
			ans = max(ans, s[i]);
			for (int j = 0; j < i; j++) {
				if (s[i] - s[j] > s[i]) {
					ans = max(ans, s[i] - s[j]);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}