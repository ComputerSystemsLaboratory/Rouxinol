#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>	// require sort next_permutation count __gcd reverse etc.
#include <cstdlib>	// require abs exit atof atoi 
#include <cstdio>		// require scanf printf
#include <functional>
#include <numeric>	// require accumulate
#include <cmath>		// require fabs
#include <climits>
#include <limits>
#include <cfloat>
#include <iomanip>	// require setw
#include <sstream>	// require stringstream 
#include <cstring>	// require memset
#include <cctype>		// require tolower, toupper
#include <fstream>	// require freopen
#include <ctime>		// require srand
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(A) A.begin(), A.end()
/*
	http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_D&lang=jp

	最長増加部分列（LIS: Longest Increasing Subsequence ）
	
	dp[i]:=最後が ai であるような最長の増加部分列の長さ

	最後が ai であるような増加部分列は

	ai のみからなる列
	j < i かつ aj < ai であるような aj で終わる増加部分列の後ろに ai を付け足した列

	dp[i] = max{1, dp[j] + 1 (j < i かつ aj < ai ) }

	計算量：O(N^2)

	もうひとつ。

	dp[i]:=長さがi+1であるような増加部分列における最終要素の最小値(存在しない場合はINF）

	計算量：O(N*log N )

	参考：蟻本 p65
*/
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const int MAX_N = 100000;
const int INF = (int)1e9 + 1;
int N;
int a[MAX_N+1];
int dp[MAX_N+1];

/*
int solve (void ){
	rep (i, N ) dp[i] = 1;

	rep (i, N ){
		for (int j = 0; j < i; j++ ){
			if (a[j] < a[i] ) dp[i] = max (dp[i], dp[j] + 1 );
		} // end for
	} // end rep

	return dp[N-1];
}
*/

int solve (void ){
	rep (i, N ) dp[i] = INF;

	rep (i, N ) *lower_bound (dp, dp+N, a[i] ) = a[i];

	int res = lower_bound (dp, dp+N, INF ) - dp;

	return res;
}

int main()
{
	memset (a, 0, sizeof (a ) );

	ios_base::sync_with_stdio(0);
	cin >> N;
	rep (i, N ) cin >> a[i];

	int res = solve ();	
	cout << res << endl;
		
	return 0;
}