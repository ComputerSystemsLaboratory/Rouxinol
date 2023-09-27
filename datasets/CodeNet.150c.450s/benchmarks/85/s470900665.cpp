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
typedef pair<int, int> P;
const int INF = 1<<22;

// dp[i][j] := [i , j]??????????????????????????則???????????????????属???即????????属
// |(4*5   (5*3)  3*2)|  2*1
int main()
{
	int n, dp[128][128], r[128];
	P T[128];

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
		 	dp[i][j] = INF;
		}
	}
	/*
	for(int i = 0; i < n; i++)
	{
		dp[i][i] = 0;
	}
	*/
	for(int i = 0; i < n; i++)
	{
		cin >> T[i].first >> T[i].second;
		dp[0][i] = 0;
	}
	/*
	r[0] = T[0].first;
	for(int i = 0; i < n; i++)
	{
		r[i+1] = T[i].second;
	}
	*/
	/*
	for(int i = 0; i <= n; i++)
	{
		cout << r[i] << endl
	}
	*/
	/*
	for(int l = 1; l < n; l++)
	{
		for(int i = 0; i < n-l; i++)
		{ 
			int j = i + l;
			for(int k = 1; k <= l; k++)
			{
				dp[i][j] = std::min(dp[i][j], dp[i][i + k - 1] + dp[i + k][j] + T[i].first*T[i + k].first*T[j].second); //r[j]*r[k]*r[i+j+1]);
			}
		}
	}
*/
	for(int i = 1; i < n; i++)
	{
		for(int j = 0; j < n-i; j++)
		{ 
			for(int k = 1; k <= i; k++)
			{
				dp[i][j] = std::min(dp[i][j], dp[k-1][j] + dp[i-k][j+k] + T[j].first*T[j + k].first*T[j + i].second); //r[j]*r[k]*r[i+j+1]);
				//printf("%3d : %3d : %3d => %3d\n", i, j, k, dp[i][j]);
				//puts("run");
			}
		}
	}

	/*
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%10d ",dp[i][j]);
		}
		puts("");
	}
    */	

	cout << dp[n-1][0] << endl;
}