#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>
#include <ctime>
#include <cstdlib>

using namespace std;

inline int to_int(string s) {int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string to_str(T x) {ostringstream sout; sout << x; return sout.str();}

typedef long long ll;

int main()
{
	int dp[32] = {0}, n;
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;

	for(int i = 3; i < 31; i++)
	{
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	}

	while(cin >> n, n)
	{
		cout << (dp[n]/365)/10 + 1 << endl;
	}
}