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
	vector<int> a;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		for (int l = 0; l < (int)a.size(); l++)
		{
			if (a[l] == k)
			{
				ans++;
				break;
			}
			if (a[l]>k)break;
		}


	}
	cout << ans << endl;
}