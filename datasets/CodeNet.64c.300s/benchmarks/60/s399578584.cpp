#include <iostream>

using namespace std;

int main ( void )
{
	const int dx[] = { 0, 1 }, dy[] = { 1, 0 };
	int a, b, m[16][16];

	while ( cin >> a >> b, a | b )
	{
		int n;
		cin >> n;

		for (int i = 0; i < b; ++i)
			for (int j = 0; j < a; ++j)
				m[i][j] = 0;

		m[0][0] = 1;

		for (int i = 0, x, y; i < n; ++i)
		{
			cin >> x >> y;
			m[y-1][x-1] = -1;
		}

		for (int y = 0; y < b; ++y)
			for (int x = 0; x < a; ++x)
				if ( m[y][x] > 0 )
				{
					for (int d = 0, mx, my; d < 2; ++d)
					{
						mx = x + dx[d];
						my = y + dy[d];
						if ( mx < a && my < b && m[my][mx] != -1 )
							m[my][mx] += m[y][x];
					}
				}
		cout << m[b-1][a-1] << endl;
	}
	return 0;
}