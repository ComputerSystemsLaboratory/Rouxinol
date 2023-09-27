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
#include<list>
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
	int n;
	cin >> n;
	while (n != 0)
	{
		int ans = 0;
		int m, h;
		m = 0; h = 0;
		int nex = 1;
		for (int i = 0; i < n; i++)
		{
			string a;
			cin >> a;
			if (a == "lu")
			{
				h = 1;
			}
			if (a == "ru")
			{
				m = 1;
			}
			if (a == "ld")
			{
				h = 0;
			}
			if (a == "rd")
			{
				m = 0;
			}
			if (h == m&&h == nex)
			{
				ans++;
				(nex == 0) ? nex = 1 : nex = 0;
			}
		}
		cout << ans << endl;





		cin >> n;
	}
	
}