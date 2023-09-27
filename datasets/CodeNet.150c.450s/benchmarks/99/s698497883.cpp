#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<utility>
#include<iomanip>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include<list>
#include<set>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,k,n) for(int i=k;i<(int)n;i++)
#define F first
#define S second
using namespace std;
const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
const int dX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dY[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
struct XY
{
	int x;
	int y;
};
int in()
{
	int x;
	cin >> x;
	return x;
}

/*
(char)'1' - (int)48 = (int)1;
　1111181
*/
////////////////////////////////////////////////////




int main()
{
	int n;
	cin >> n;
	rep(EEE, n)
	{
		string a, b;
		cin >> a >> b;
		int ans = 0;
		int now = 0;
		for (int i = a.size() - 1; i >= 0; i--)
		{
			if (a[i] == 'i')
			{
				if (now != 0)ans += now;
				now = 1;
			}
			else if (a[i] == 'x')
			{
				if (now != 0)ans += now;
				now = 10;
			}
			else if (a[i] == 'c')
			{
				if (now != 0)ans += now;
				now = 100;
			}
			else if (a[i] == 'm')
			{
				if (now != 0)ans += now;
				now = 1000;
			}
			else
			{
				ans += now*(a[i] - 48);
				now = 0;
			}
		}
		if (now != 0)ans += now;
		now = 0; a = b;
		for (int i = a.size() - 1; i >= 0; i--)
		{
			if (a[i] == 'i')
			{
				if (now != 0)ans += now;
				now = 1;
			}
			else if (a[i] == 'x')
			{
				if (now != 0)ans += now;
				now = 10;
			}
			else if (a[i] == 'c')
			{
				if (now != 0)ans += now;
				now = 100;
			}
			else if (a[i] == 'm')
			{
				if (now != 0)ans += now;
				now = 1000;
			}
			else
			{
				ans += now*(a[i] - 48);
				now = 0;
			}
		}
		if (now != 0)ans += now;
		if (ans / 1000)
		{
			if (ans / 1000 == 1)cout << "m";
			else cout << ans / 1000 << "m";
			ans -= ans/1000*1000;
		}
		
		if (ans / 100)
		{
			if (ans / 100 == 1)cout << "c";
			else cout << ans / 100 << "c";
			ans -= ans/100*100;
		}
		
		if (ans / 10)
		{
			if (ans / 10 == 1)cout << "x";
			else cout << ans / 10 << "x";
			ans -= ans/10*10;
		}
		
		if (ans / 1)
		{
			if (ans / 1 == 1)cout << "i";
			else cout << ans / 1 << "i";
		}
		cout << endl;


	}
}