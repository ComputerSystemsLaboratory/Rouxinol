#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;
using Tiles = vector<string>;

struct Point {
	int x;
	int y;

	Point() :
		x{0}, y{0}
	{}

	Point(int _x, int _y) :
		x{_x}, y{_y}
	{}

	const Point operator+ (const Point& rhs) const
	{
		Point temp{x + rhs.x, y + rhs.y};
		return temp;
	}
};

const Point Arround[4] {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int dfs(const Tiles& tiles, const Point& start, int W, int H)
{
	int count{0};
	queue<Point> Q;

	// ????????¨????????????????????????????????????
	vector<vector<bool>> done(H, vector<bool>(W, false));

	Q.push(start);
	done[start.y][start.x] = true;

	while(true) {
		if(Q.empty()) break;

		const auto& pos = Q.front();
		Q.pop();

		if(tiles[pos.y][pos.x] == '#') continue;

		++count;

		for(const auto& a : Arround) {
			const auto& p = pos + a;

			if(p.x < 0 || W <= p.x) continue;
			if(p.y < 0 || H <= p.y) continue;
			if(done[p.y][p.x]) continue;

			done[p.y][p.x] = true;
			Q.push(p);
		}
	}

	return count;
}

int main()
{
	int W, H;

	while(true) {
		cin >> W >> H;
		if(W == 0 && H == 0) break;

		Tiles tiles(H);
		Point start;

		for(int i = 0; i < H; ++i) {
			cin >> tiles[i];

			for(int j = 0; j < tiles[i].size(); ++j) {
				if(tiles[i][j] == '@') {
					start = Point{j, i};
					break;
				}
			}
		}

		cout << dfs(tiles, start, W, H) << endl;
	}

	return 0;
}