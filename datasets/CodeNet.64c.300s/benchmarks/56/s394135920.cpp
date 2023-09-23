#include <stdio.h>
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
#define all(c) ((c).begin(),(c).end())
#define rall(c) (c).rbegin(),(c).rend()
#define sort(v,n) sort(v,v+n)
#define vsort(v) sort(v.begin(),v.end())
#define vvsort(v) sort(v.begin(),v.end(),greater<int>())
#define ll long long
#define pb(a) push_back(a)
#define fi first
#define se second
#define inf 999999999
using namespace std;
const ll MOD = 1e9 + 7;
const double PI = acos(-1.0);
//---------------------------------------------------------------------------------------------//
int n;
int y[101], m[101], d[101];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int ans = 0;
		cin >> y[i] >> m[i] >> d[i];
		if ((y[i] - 1) % 3 == 0) {
			ans += 590 * (y[i] - 1) / 3;
		}
		else if ((y[i] - 1) % 3 == 1) {
			ans += 195;
			ans += 590 * (y[i] - 2) / 3;
		}
		else {
			ans += 590 * y[i] / 3;
			ans -= 200;
		}
		if (y[i] % 3 != 0) {
			if (m[i] % 2 == 0) {
				ans += m[i] * 10 + (m[i] / 2 - 1) * 19;
			}
			else {
				ans += m[i] / 2 * 20 + m[i] / 2 * 19;
			}
		}
		else {
			ans += (m[i] - 1) * 20;
		}
		ans += d[i];
		cout <<196471- ans << endl;
		}
}