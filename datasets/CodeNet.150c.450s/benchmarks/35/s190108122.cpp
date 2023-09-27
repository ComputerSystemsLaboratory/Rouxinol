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

using namespace std;
typedef long long Int;
#define REP(i , x) for(Int i = 0 ; i < x ; ++i)
typedef pair<int, int> P;


int main()
{
	int n;

	while (cin >> n,n){
		Int dp[10000];
		Int aa[10000];

		fill(aa, aa + 10000, 0);
		fill(dp, dp + 10000, 0);

		REP(i, n){
			cin >> aa[i];
		}

		Int max_i = -99999999;

		dp[0] = aa[0];

		max_i = max(max_i, dp[0]);

		for(int i = 1; i < n ; ++i){
			dp[i] = max(aa[i], dp[i - 1] + aa[i]);
			max_i = max(max_i, dp[i]);
		}

		cout << max_i << endl;
	}
	return 0;
}