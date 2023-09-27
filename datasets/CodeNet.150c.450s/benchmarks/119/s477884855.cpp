#include<iostream>
#include<queue>
using namespace std;
int dx[] = {1,1,0,-1,-1,-1,0,1};
int dy[] = {0,1,1,1,0,-1,-1,-1};
int c[51][51];
int main()
{

	int w, h;

	while (cin >> w && cin >> h && w != 0 && h != 0)
	{
		for (int i = 1; i < h + 1; i++)
		{
			for (int j = 1; j < w + 1; j++)
			{
				int tmp;
				cin >> tmp;
				if (tmp == 0)
				{
					c[i][j] = -1;
				}
				else
				{
					c[i][j] = 0;
				}
			}
		}

		int count = 0;
		queue<pair<int,int> > q;
		for (int i = 1; i < h + 1; i++)
		{
			for (int j = 1; j < w + 1; j++)
			{
				if (c[i][j] != 0)continue;
				q.push(make_pair(i,j));
				c[i][j] = 1;
				while (q.size() > 0)
				{
					pair<int, int> p = q.front();
					q.pop();
					int y = p.first;
					int x = p.second;

					for (int d = 0; d < 8; d++)
					{
						int nx = x + dx[d];
						int ny = y + dy[d];

						if (nx < 1 || ny < 1 || nx > w || ny > h)continue;
						if (c[ny][nx] != 0)continue;
						q.push(make_pair(ny, nx));
						c[ny][nx] = 1;
					}
				}
				count++;
			}
		}

		cout << count << endl;


	}

	return 0;
}