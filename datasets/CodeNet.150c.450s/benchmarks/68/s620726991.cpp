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
	int n;
	cin >> n;

	while (n) {
		vector<int> point(n);
		rep(i, 0, n) cin >> point[i];

		SORT(point);
		REV(point);
		int ans = point[0] - point[1];
		rep(i, 1, n - 1) {
			int sub = point[i] - point[i + 1];
			ans = min(ans, sub);
		}
		cout << ans << endl;

		cin >> n;
	}

	return 0;
}
