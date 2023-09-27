#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <fstream>
#include <array>
#include <utility>
#include <functional>
#include <stack>
#include <math.h>
#include <numeric>

using namespace std;
typedef long long Int;
#define REP(i , x) for(Int i = 0 ; i < x ; ++i)
typedef pair<int, int> P;


int main()
{
	int a[4], t[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> t[0] >> t[1] >> t[2] >> t[3];

	int asum = accumulate(a, a + 4, 0);
	int tsum = accumulate(t, t + 4, 0);

	cout << max(asum, tsum) << endl;

	return 0;
}