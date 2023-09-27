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
	cin >> n;
	REP(rep, n)
	{
		string s[2];
		int x[2];
		x[0] = 0; x[1] = 0;
		cin >> s[0] >> s[1];
		REP(i, 2)
		{
			REP(j,s[i].size())
			{
				if (s[i][j] == 'm')
				{
					if (j == 0) x[i] += 1000;
					else x[i] += 1000 * (s[i][j-1] - '0');
				}
				if (s[i][j] == 'c')
				{
					if (j == 0 || s[i][j-1] == 'm') x[i] += 100;
					else x[i] += 100 * (s[i][j-1] - '0');
				}
				if (s[i][j] == 'x')
				{
					if (j == 0 || s[i][j - 1] == 'm' || s[i][j - 1] == 'c') x[i] += 10;
					else x[i] += 10 * (s[i][j - 1] - '0');
				}
				if (s[i][j] == 'i')
				{
					if (j == 0 || s[i][j - 1] == 'm' || s[i][j - 1] == 'c' || s[i][j - 1] == 'x') x[i] += 1;
					else x[i] += s[i][j - 1] - '0';
				}
			}
		}
		int sum = x[0] + x[1];

		string ans = "";
		if (sum / 1000 > 0)
		{
			if (sum / 1000 == 1) ans += "m";
			else
			{
				char a = sum / 1000 + '0';
				ans += a;
				ans += "m";
			}
			sum %= 1000;
		}
		if (sum / 100 > 0)
		{
			if (sum / 100 == 1) ans += "c";
			else
			{
				char a = sum / 100 + '0';
				ans += a;
				ans += "c";
			}
			sum %= 100;
		}
		if (sum / 10 > 0)
		{
			if (sum / 10 == 1) ans += "x";
			else
			{
				char a = sum / 10 + '0';
				ans += a;
				ans += "x";
			}
			sum %= 10;
		}
		if (sum > 0)
		{
			if (sum == 1) ans += "i";
			else
			{
				char a = sum + '0';
				ans += a;
				ans += "i";
			}
		}
		cout << ans << endl;
	}
	return 0;
}