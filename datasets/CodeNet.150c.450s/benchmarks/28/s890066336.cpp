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
vector<long long > a;
vector<long long >::iterator now,b;
int n, t;
bool s(long long m)
{
	now = a.begin();
	for (int i = 0; i < t - 1; i++){
		if (binary_search(now, a.end(), m + *now))
		{
			now = lower_bound(now, a.end(), m + *now);
		}
		else
		{
			now = lower_bound(now, a.end(), m + *now);
			now--;
		}

		if (now >= a.end())return true;
		
	}
	if (a[a.size()-1] - *now <= m)return true;
	else return false;

}
int main()
{
	cin >> n >> t;
	a.push_back(0);
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
		a[i] += a[i - 1];
	}
	long long  r, l; r = 10000000000; l = 0;
	while (r != l)
	{
		long long m = (r + l) / 2;
		if (s(m))
		{
			r = m;
		}
		else
		{
			l = m+1;
		}
		;
	}
	cout << r << endl;



}