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
struct XY
{
	int x;
	int y;
};


/*
(char)'1' - (int)48 = (int)1;


*/
int main()
{
	int h, w;
	cin >> w>> h;
	while (w != 0 || h != 0)
	{
		queue<XY> m;
		XY fis;
		int a[200][200] = {};
		for (int i = 0; i < h; i++)
		{
			for (int l = 0; l < w; l++)
			{
				char r;
				cin >> r;
				if (r == '.')
					a[i + 1][l + 1] = 1;
				else if (r == '@')
				{
					fis.x = l + 1;
					fis.y = i + 1;
				}

			}
		}


		int ans = 1;
		m.push(fis);
		while (!m.empty())
		{
			XY gg;
			int x, y;
			x = m.front().x;
			y = m.front().y;
			m.pop();

			for (int i = 0; i < 4; i++)
			{
				if (a[y + dy[i]][x + dx[i]] == 1)
				{
					ans++;
					a[y + dy[i]][x + dx[i]] = 0;
					gg.x = x + dx[i];
					gg.y = y + dy[i];
					m.push(gg);
				}
			}

		}

		cout << ans << endl;
		cin >> w >> h;
	}
}