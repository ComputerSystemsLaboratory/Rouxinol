#include<cmath>
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<cstdio>
#include<map>
#include<utility>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define fori(i,k,n) for(int i=k;i<(int)n;i++)
using namespace std;
const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
const int dX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dY[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
/*
(char)'1' - (int)48 = (int)1; 


*/


int main()
{
	string a;
	stack<int> all;
	stack< pair<int, int> > ss;
	int ans = 0;
	cin >> a;
	for (int i = 0; i < (int)a.size(); i++)
	{
		if (a[i] == '\\')
			all.push(i);
		else if (a[i] == '/'&&!all.empty())
		{
			int b = all.top(); all.pop();
			int a = i - b;
			ans += a;
			while (!ss.empty() && ss.top().first >b)
			{
				a += ss.top().second;
				ss.pop();
			}
			pair<int, int> pp;
			pp.first = b; pp.second = a;
			ss.push(pp);
		}
	}
	vector<int> aa;
	while (!ss.empty())
	{
		aa.push_back(ss.top().second);
		ss.pop();
	}
	reverse(aa.begin(), aa.end());
	cout << ans << endl;
	cout << aa.size();
	for (int i = 0; i < (int)aa.size();i++)
	{
		cout << " ";
		cout << aa[i];
	}
	cout << endl;
}