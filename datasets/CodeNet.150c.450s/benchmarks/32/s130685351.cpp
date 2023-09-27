#include <iostream>
#include <cmath>
#include <utility>
#include <functional>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <tuple>
#include <stdlib.h>
#include <deque>
using namespace std;
#define rep(i,n,x) for(int i=n;i<x;i++)
#define rem(i,n,x) for(int i=n;i>x;i--)
#define SORT(x) sort(x.begin(),x.end())
#define REV(x) reverse(x.begin(),x.end())
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define setp(x) setprecision(x)
using LL = long long;
using ULL = unsigned long long;

int main() {
	int m, nMin, nMax;
	cin >> m >> nMin >> nMax;

	while (m != 0) {
		vector<int> point(m);
		rep(i, 0, m) cin >> point[i];

		vector<int> gap(m - 1);
		// ギャップの配列
		rep(i, 0, m - 1) {
			gap[i] = point[i] - point[i + 1];
		}
		// 最大のギャップで最大の合格者数
		int mx = 0, ans = nMin;
		rep(i, nMin - 1, nMax) {
			if (mx <= gap[i]) ans = max(ans, i + 1);
			mx = max(mx, gap[i]);
		}

		cout << ans << endl;

		cin >> m >> nMin >> nMax;
	}

	return 0;
}
