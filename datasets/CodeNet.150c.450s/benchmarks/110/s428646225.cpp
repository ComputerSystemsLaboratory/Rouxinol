#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<vector>
#include<stack>
#include<utility>
#include<sstream>
using namespace std;
typedef long long ll;
const int inf = 0x3f3f3f3f;
const int maxn = 1005;
int a[1005][1005];
int x[20], y[20];
int ans, w, h, n;
bool leap[1005][1005];
int dir[4][2] = { 1, 0, -1, 0, 0, 1, 0, -1 };
struct Node
{
	int x, y, t;
	Node(int x, int y, int t) :x(x), y(y), t(t){}
};
int work(int xx, int yy, int pos)
{
	memset(leap, false, sizeof(leap));
	leap[xx][yy] = 1;
	queue<Node>p;
	p.push(Node(xx, yy, 0));
	while (p.size())
	{
		Node temp = p.front();
		p.pop();
		for (int i = 0; i < 4; i++)
		{
			int tempx = temp.x + dir[i][0];
			int tempy = temp.y + dir[i][1];
			if (tempx >= 1 && tempx <= h&&tempy >= 1 && tempy <= w)
			{
				if (a[tempx][tempy] == 1)continue;
				if (leap[tempx][tempy] == 1)continue;
				if (tempx == x[pos + 1] && tempy == y[pos + 1])
				{
					return temp.t + 1;
				}
				leap[tempx][tempy] = 1;
				p.push(Node(tempx, tempy, temp.t + 1));
			}
		}
	}

}
int main()
{
#ifdef LOCAL
	freopen("C:\\Users\\ΡΡ\\Desktop\\in.txt", "r", stdin);
	//freopen("C:\\Users\\ΡΡ\\Desktop\\out.txt","w",stdout);
#endif // LOCAL
	while (scanf("%d%d%d", &h, &w, &n) != EOF)
	{
		char s[1005];
		for (int i = 1; i <= h; i++)
		{
			scanf("%s", s);
			for (int j = 1; j <= w; j++)
			{
				if (s[j - 1] == '.')
					a[i][j] = 0;
				else if (s[j - 1] == 'X')
					a[i][j] = 1;
				else if (s[j - 1] == 'S')
				{
					x[0] = i; y[0] = j;
					a[i][j] = 0;
				}
				else
				{
					a[i][j] = 0;
					int id = s[j - 1] - '0';
					x[id] = i; y[id] = j;
				}
			}
		}
		ans = 0;
		for (int i = 0; i < n; i++)
		{
			ans = ans + work(x[i], y[i], i);
		}
		printf("%d\n", ans);
	}
	return 0;
}