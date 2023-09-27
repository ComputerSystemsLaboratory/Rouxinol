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

	int n, m, p;
	cin >> n >> m >> p;
	while (n != 0|| m != 0 || p != 0)
	{
		int a[110];
		double al = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			al += a[i]*100;
		}
		al = al*(100-p)/100;
		if (a[m - 1] == 0)
		{
			cout << 0 << endl;
		}
		else
		{
			al /= a[m - 1];
			int ans = al;
			cout << ans << endl;
		}



		cin >> n >> m >> p;
	}
}