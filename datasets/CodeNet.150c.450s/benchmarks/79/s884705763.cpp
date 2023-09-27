#include<cmath>
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<cstdio>
#define rep(i,n) for(int i=0;i<n;i++)
#define fori(i,k,n) for(int i=k;i<n;i++)
using namespace std;
const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
const int dX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dY[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };



int main()
{
	int r, l;
	cin >> l >> r;
	while (1)
	{
		if (l == r&&r == 0)break;
		vector<int> h;
		for (int i = l; i >=1; i--)h.push_back(i);
		for (int i = 0; i < r; i++)
		{
			vector<int> now;
			int p, c;
			cin >> p >> c;
			for (int k = p - 1; k < p - 1 + c; k++)
			{
				now.push_back(h[k]);
			}
			for (int k = 0; k < p - 1; k++)
			{
				now.push_back(h[k]);
			}
			for (int k = p - 1 + c; k < h.size(); k++)
			{
				now.push_back(h[k]);
			}
			for (int k = 0; k < h.size(); k++)
			{
				h[k] = now[k];
			}
		}
		cout << h[0] << endl;
		cin >> l >> r;
	}

	return 0;
}