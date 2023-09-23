#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <string>
#include <ctype.h>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <functional>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long
//#define scanf scanf_s

int main()
{
	int n;
	int a[5005];
	while (cin >> n, n)
	{
		memset(a, 5005, 0);
		REP(i, n) cin >> a[i];
		int s[5005];
		s[0] = 0;
		FOR(i, 1, n+1) s[i] = s[i - 1] + a[i-1];
		int ans = -INF;
		REP(i, n)
		{
			for (int j = i + 1; j < n+1; j++)
			{
				ans = max(ans, (s[j] - s[i]));
			}
		}
		cout << ans << endl;
	}
	return 0;
}