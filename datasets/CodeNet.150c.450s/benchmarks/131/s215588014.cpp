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
???1111181
*/
////////////////////////////////////////////////////


int main()
{
	string a; int n;
	while (cin >> a >> n&&n)
	{
		if (a.size() < n)
		{
			string b;
			for (int i = 0; i < n - a.size(); i++)b += '0';
			b += a;
			a = b;
		}
		int now = 0;
		map<string,int> xx;
		xx[a] = now;
		while (1)
		{
			now++;
			string mi, ma;
			mi = a;
			sort(mi.begin(), mi.end());
			ma = mi;
			reverse(ma.begin(), ma.end());
			for (int i = ma.size() - 1; i >= 0; i--)
			{
				ma[i] -= mi[i];
				ma[i] += 48;
				if (ma[i] < '0')
				{
					ma[i - 1]--;
					ma[i] += 10;
				}
			}
			a = ma;
			if (xx.count(a))
			{
				
				cout << xx[a] << " ";  int i = 0;
				for (; i < ma.size()-1; i++)
				{
					
					if (a[i] != '0')break;
				}
				for (; i < n; i++)cout << a[i];
				cout << " " << now - xx[a] << endl;
				break;
			}
			else
			{
				xx[a] = now;
			}
		}
		
	}
}