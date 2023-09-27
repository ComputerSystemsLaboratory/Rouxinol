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
	int x, y, s;
	cin >> x >> y >> s;
	while (x != 0 || y != 0 || s != 0)
	{
		int ans = 0;
		for (int i = 1; i <= 1000; i++)
		{
			double a, A;
			a = i*(100 + x) / 100;
			for (int l = 1; l <= 1000; l++)
			{
				A = l*(100 + x) / 100;
				int b, B;
				b = a;
				B = A;
				if (b + B == s)
				{
					double c, C;
					c = l*(100 + y) / 100;
					C = i*(100 + y) / 100;
					int d = c, D = C;
					ans = max(ans, d + D);
				}


			}

		}

		cout << ans << endl;
		cin >> x >> y >> s;
	}

}