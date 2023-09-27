#include <iostream>
#include <vector>
using namespace std;

void search(vector<vector<int>>& map, int x, int y)
{
	if (map[x][y] < 0)
		return;

	if (map[x][y] == 1) {
		map[x][y] = 0;
		search(map, x - 1, y);
		search(map, x + 1, y);
		search(map, x, y - 1);
		search(map, x, y + 1);
		search(map, x - 1, y - 1);
		search(map, x + 1, y + 1); 
		search(map, x + 1, y - 1);
		search(map, x - 1, y + 1);
	}
}
int main()
{
	int w, h;
	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;

		vector<vector<int>> map;
		map = vector<vector<int>>(h+2, vector<int>(w+2, -1));

		for (int i = 1; i < h+1; i++) {
			for (int j = 1; j < w+1; j++)
				cin >> map[i][j];
		}
		int island_n = 0;
		for (int i = 1; i < h + 1; i++) {
			for (int j = 1; j < w + 1; j++) {
				if (map[i][j] == 1) {
					island_n++;
					search(map,i, j);
				}
			}
		}
		cout << island_n << endl;
	}
	return 0;
}