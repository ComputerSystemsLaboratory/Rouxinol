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
#define rep(i,n) for(int i=0;i<n;i++)
#define fori(i,k,n) for(int i=k;i<n;i++)
using namespace std;
const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
const int dX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dY[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
/*
(char)'1' - (int)48 = (int)1; 


*/


int main()
{
	int a[1100]; a[0] = 0;
	for (int i = 1; i < 1001; i++)
	{
		a[i] = a[i - 1] + i;
	}
	for (int n=-1; n != 0; cin >> n)
	{
		if (n == -1)continue;
		int ans = 0;
		for (int i = n; i >= 0; i--)
		{
			for (int k = i - 1; k >= 0; k--)
			{
				if (a[i] - a[k] == n)ans++;
			}


		}
		cout << ans-1 << endl;


	}
}