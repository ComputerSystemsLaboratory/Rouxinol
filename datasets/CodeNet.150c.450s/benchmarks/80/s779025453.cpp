#include <iostream>
#include <algorithm>
#include <array>
#include <functional>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stdlib.h>
#include <string>
#include <vector>

#define INF 1000000000
#define MOD 1000000007
#define ll long long
#define rep(i,a,b) for(i = (a); i < (b); i++)
#define bitget(a,b) (((a) >> (b)) & 1)
#define vint vector<int>
#define vvint vector<vector<int>>
#define vsort(x) sort(x.begin(),x.end())

using int64 = uint64_t;

using namespace std;

int main() {

	int i, j, k;
	int a[8];
	rep(i, 0, 8)
		cin >> a[i];
	int x=0, y=0;
	rep(i, 0, 4)
		x += a[i];
	rep(i, 4, 8)
		y += a[i];
	cout << max(x, y) << endl;
	return 0;
}