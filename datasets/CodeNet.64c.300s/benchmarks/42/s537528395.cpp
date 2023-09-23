#include <iostream>
#include <cstring>
using namespace std;

int map[21][21];

int main()
{
	int N, M;
	while (cin >> N, N)
	{
		memset(map, 0, sizeof(map));
		for (int i=0; i<N; i++)
		{
			int x, y;
			cin >> x >> y;
			map[y][x] = 1;
		}

		cin >> M;
		int px=10, py=10;
		while (M--)
		{
			char c;
			int n;
			cin >> c >> n;
			for (int i=1; i<=n; i++)
			{
				switch(c)
				{
					case 'N':
						py++;
						break;
					case 'E':
						px++;
						break;
					case 'S':
						py--;
						break;
					case 'W':
						px--;
						break;
				}
				map[py][px] = 0;
			}
		}

		bool f=1;
		for (int y=0; y<=20; y++)
		for (int x=0; x<=20; x++)
			if (map[y][x])
			{
				f=0; break;
			}

		cout << (f ? "Yes" : "No") << endl;
	}
}