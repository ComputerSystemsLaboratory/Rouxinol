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
double x, y, s;
int main() {
	while (cin >> x >> y >> s) {
		if (x == 0)return 0;
		int ans = 0;
		for (int i = 1; i < s; i++) {
			for (int j = 1; j < s; j++) {
				if ((int)(i*(100 + x) / 100) + (int)(j*(100 + x) / 100) == s) {
					ans = max(ans, (int)(i*(100 + y) / 100) + (int)(j*(100 + y) / 100));
				}
			}
		}
			
		cout << ans << endl;
	}
}