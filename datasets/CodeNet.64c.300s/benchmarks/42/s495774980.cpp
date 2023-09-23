#include<iostream>
#include<algorithm>
int dx[] = { 0,1,0,-1 }, dy[] = { 1,0,-1,0 };
using namespace std;
int main()
{
	int n;
	while (cin >> n, n)
	{
		int x = 10, y = 10;
		int m[21][21] = {};
		for (int i = 0;i < n;i++)
		{
			int a, b;cin >> a >> b;m[a][b] = 1;
		}
		int c;cin >> c;
		int cnt = 0;
		for (int i = 0;i < c;i++)
		{
			char s;int l;cin >> s >> l;
			int d = s == 'N' ? 0 : s == 'E' ? 1 : s == 'S' ? 2 : 3;
			for (int j = 0;j < l;j++)
			{
				x += dx[d], y += dy[d];
				cnt += m[x][y];
				m[x][y] = 0;
			}
		}
		cout << (cnt == n ? "Yes" : "No") << endl;
	}
}