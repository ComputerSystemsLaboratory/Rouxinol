#include<iostream>
#include<queue>
#include<stdlib.h>
#include<cstring>
#include<string.h>
using namespace std;
struct ma
{
	int x;
	int y;
};
int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
char m[1200][1200];
int map[1200][1200];
int main()
{
	int ans = 0;
	int tate, yoko;
	int n;
	cin >> tate >> yoko >> n;
	
	ma sta;
	for (int i = 0; i < tate; i++)
	{
		for (int k = 0; k < yoko; k++)
		{
			cin >> m[i][k];
			if (m[i][k] == 'S')
			{
				sta.x = k;
				sta.y = i;
			}
		}
	}
	int HP = 1;
	queue<ma> hoge;
	for (int i = 0; i < n; i++)
	{
		hoge.push(sta);
		
		memset(map, -1, sizeof(map));
		map[sta.y][sta.x] = 0;
		while (!hoge.empty())
		{
			ma now;
			now = hoge.front();
			hoge.pop();
			for (int k = 0; k < 4; k++)
			{
				if (now.y + dy[k] >= tate || now.x + dx[k] >= yoko)continue;
				if (now.y + dy[k] < 0 || now.x + dx[k] < 0)continue;
				if (m[now.y + dy[k]][now.x + dx[k]] != 'X')
				{
					if (map[now.y + dy[k]][now.x + dx[k]] != -1)
					{
						continue;
					}
					map[now.y + dy[k]][now.x + dx[k]] = map[now.y][now.x] + 1;
					if (m[now.y + dy[k]][now.x + dx[k]] - '0' == HP)
					{
						m[now.y + dy[k]][now.x + dx[k]] = '.';
						ans += map[now.y + dy[k]][now.x + dx[k]];
						while (!hoge.empty())hoge.pop();
						HP++;
						sta.x = now.x + dx[k];
						sta.y = now.y + dy[k];
						break;
					}
					else
					{
						ma hage;
						hage.x = now.x + dx[k];
						hage.y = now.y + dy[k];
						hoge.push(hage);
					}
				}
			}

		/*	for (int i = 0; i < tate; i++)
			{
				for (int k = 0; k < yoko; k++)
				{
					cout << map[i][k] << " ";
				}
				cout << endl;
			}
			cout << endl;*/
		}
	}
	cout << ans << endl;

}