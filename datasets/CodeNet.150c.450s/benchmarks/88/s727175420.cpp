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
#include<stdlib.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,k,n) for(int i=k;i<(int)n;i++)
using namespace std;
const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
const int dX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dY[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
vector<long long> Prime;
void SieveOfEratosthenes(long long e) //setup vector<long long>Prime(~x)
{
	bool *x=new bool[e];
	for (long long i = 0; i <= e; i++)x[i] = false;
	for (long long i = 2; i <= e; i++)
	{
		if (x[i]);
		else
		{
			Prime.push_back(i);
			for (long long l = i; l <= e; l += i)x[l] = true;
		}
	}
	return;
}
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
	vector<pair<int, int > > ans;
	for (int i = 1; i <= 150; i++)
	{
		for (int l = i+1; l <= 150; l++)
		{
			pair<int, int> now;
			now.first = i*i + l*l;
			now.second = i;
			ans.push_back(now);
		}
	}
	bool enn = true;
	while (enn)
	{
		enn = false;
		for (int i = 1; i < ans.size(); i++)
		{
			if (ans[i].first == ans[i - 1].first&&ans[i].second < ans[i-1].second)
			{
				swap(ans[i], ans[i - 1]);
				enn = true;
			}
			if (ans[i].first < ans[i - 1].first)
			{
				swap(ans[i], ans[i - 1]);
				enn = true;
			}
		}
	}
	
	int h,w;
	while (cin>>h>>w&&h)
	{
		int t = h*h + w*w;

		rep(i, ans.size())
		{
			if (ans[i].first==t&&h<ans[i].second)
			{
				cout << ans[i].second << " " << sqrt(ans[i].first - (ans[i].second*ans[i].second)) << endl;
				break;
			}
			else if (ans[i].first > t)
			{
				cout << ans[i].second << " " << sqrt(ans[i].first - (ans[i].second*ans[i].second)) << endl;
				break;

			}
		}

	}
	
}