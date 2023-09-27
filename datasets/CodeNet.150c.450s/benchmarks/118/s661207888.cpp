/*
 * A.cpp
 *
 *  Created on: 2017/06/18
 *      Author: aihara
 */

#include<bits/stdc++.h>
#define MYDEBUG
#ifdef MYDBUG
#define dbp(x) cout<<#x<<": "<<x<<endl;
#else
#define dbp(x)
#endif
#define ll long long
#define rep(i,from,to) for(int i=from; i<to; ++i)
#define REP(i,from,to) for(int i=from; i<=to; ++i)

using namespace std;

int n;
int y, m, d;
int total = 196470;

void solve() {
	cin >> n;
	rep(test_case, 0, n)
	{
		cin >> y >> m >> d;
		//??´????????????
		int ans = 0;
		rep(yi, 1, y)
		{
			if (yi % 3 == 0) {
				ans += 10 * 20;
			} else {
				ans += 5 * 20 + 5 * 19;
			}
		}
		//???????????????
		rep(mi, 1, m)
		{
			if (y % 3 == 0 || mi % 2 != 0) {
				ans += 20;
			} else {
				ans += 19;
			}
		}
		ans += d - 1;
		cout << total - ans << endl;
	}
}

int main() {
	solve();
}