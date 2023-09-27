#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <sstream>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,k,n) for(int i=k;i<(int)n;i++)
#define rei(n) for(int i=0;i<(int)n;i++)
#define rel(n) for(int l=0;l<(int)n;l++)
#define al(s) s.begin(),s.end()
#define INT_MAX 2147483647
#define debug(x) cout<<#x<<": "<<x<<endl;
#define PI 2*acos(0,0)
#define pb push_back
#define inin(x) int x; cin>>x;
#define ll long long

typedef pair<int, int> pii;

struct Calendar
{
	long long year;
	long long month;
	long long day;
	long long dat[2][13];
	Calendar(long long y, long long m, long long d)
	{
		year = y;
		month = m;
		day = d;
		dat[0][0] = dat[1][0] = 0;
		dat[0][1] = dat[1][1] = 31;
		dat[0][2] = dat[1][2] = 28;
		dat[0][3] = dat[1][3] = 31;
		dat[0][4] = dat[1][4] = 30;
		dat[0][5] = dat[1][5] = 31;
		dat[0][6] = dat[1][6] = 30;
		dat[0][7] = dat[1][7] = 31;
		dat[0][8] = dat[1][8] = 31;
		dat[0][9] = dat[1][9] = 30;
		dat[0][10] = dat[1][10] = 31;
		dat[0][11] = dat[1][11] = 30;
		dat[0][12] = dat[1][12] = 31;
		dat[1][2] = 29;
	}
	int uruu()
	{
		if (year % 4 == 0)
		{
			if (year % 400 != 0 && year % 100 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		return 0;
	}
	int uruu(long long y)
	{
		if (y % 4 == 0)
		{
			if (y % 400 != 0 && y % 100 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		return 0;
	}
	long long pday(long long d)
	{
		day += d;
		for (;; month++)
		{
			if (month >= 13)
			{
				year++;
				month = 1;
			}

			if (dat[uruu()][month] < day)
			{
				day -= dat[uruu()][month];
			}
			else
			{
				break;
			}
		}
		pmonth(0);
		return d;
	}
	long long pmonth(long long m)
	{
		month += m;
		for (;; year++)
		{
			if (month > 12)
			{
				month -= 12;
			}
			else
			{
				break;
			}
		}
		return m;
	}
	long long pyear(long long y)
	{
		year += y;
		return y;
	}
	long long dif(Calendar c)
	{
		long long ans = 0;
		Calendar a(year, month, day);
		ans -= a.day;
		ans += c.day;
		a.day = 0;
		c.day = 0;
		for (; a.month >= 1; a.month--)
		{
			ans -= dat[a.uruu()][a.month-1];
		}
		for (; c.month >= 1; c.month--)
		{
			ans += dat[c.uruu()][c.month-1];
		}
		for (; a.year != c.year; a.year++)
		{
			ans += 365;
			if (a.uruu())ans++;
		}
		return ans;
	}


};




int main()
{
	vector<ll> dp(150000, 1000000000);
	inin(n);
	rei(n)
	{
		ll a;
		cin >> a;
		*lower_bound(al(dp), a) = a;
	}
	rei(n+3)
	{
		if (dp[i] == 1000000000)
		{
			cout << i << endl;
			break;
		}
	}
}