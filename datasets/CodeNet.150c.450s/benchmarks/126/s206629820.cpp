#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a, b, n, x, y;
	while (cin >> a >> b, a || b) {
		vector< vector<int> > map(a + 1, vector<int>(b + 1, 1));
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> x >> y;
			map[x][y] = 0;
		}
		for (int i = 0; i <= a; i++)
			map[i][0] = 0;
		for (int j = 0; j <= b; j++)
			map[0][j] = 0;
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				if ((i != 1 || j != 1) && map[i][j])
					map[i][j] = map[i - 1][j] + map[i][j - 1];
			}
		}
		cout << map[a][b] << endl;
	}
	return 0;
}