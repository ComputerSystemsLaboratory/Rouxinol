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
	int n;
	cin >> n;
	while (n--)
	{
		int y, m, d,x;
		
		int ans = 0;
		cin >> y >> m >> d;
		ans += d;
		m--;
		ans += m * 20;
		if (y % 3)ans -= (m / 2);
		y--;
		ans += y * 195;
		ans += (y / 3) * 5;
		cout << 196471 - ans << endl;
	}
	return 0;
}