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
int n, m, p;
int main() {
	while (cin >> n >> m >> p) {
		if (n == 0)return 0;
		int a[101];
		int sumgold = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sumgold += a[i];
		}
		sumgold *= 100;
		double onegold = sumgold*(100-p) / 100;
		if (a[m - 1] == 0) {
			cout << 0 << endl;
		}
		else {
			cout << (int)onegold / a[m-1] << endl;
		}
	}
}