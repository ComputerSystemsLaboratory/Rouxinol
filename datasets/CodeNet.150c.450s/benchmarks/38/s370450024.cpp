#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <fstream>
#include <stdint.h>
#include <cmath>
#include <algorithm>
#include <utility>
#include <numeric>
using namespace std;

constexpr int INF       = 1000000000;/* 1e+9a */
constexpr int MODULO    = 1000000007;

#define REP(i,f,n) for(int i=(f); i < (n); ++i)
#define PER(i,f,n) for(int i=(n-1); i >= f; --i)

constexpr int evx[4] = { 1, 0, -1, 0 };
constexpr int evy[4] = { 0, 1, 0, -1 };

//----------------------------------
//----------------------------------

signed main()
{
    ios::sync_with_stdio(false);
	int n;
	cin >> n;
	REP(i, 0, n)
	{
		array<int, 3> a;
		cin >> a[0] >> a[1] >> a[2];
		sort(a.begin(),a.end());
		cout << (a[2] * a[2] == a[1] * a[1] + a[0] * a[0]
				? "YES" : "NO") << endl;
	}
}