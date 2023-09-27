#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

#define x first.first
#define y first.second
#define mp(a, b) make_pair(a, b)

typedef pair <int, int> Point;

int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
string field[1280];
bool visited[1280][1280];
Point factory[10];
int h, w, n;

void visited_clear(void)
{
	for (int i = 0; i < 1280; i++){
		for (int j = 0; j < 1280; j++){
			visited[i][j] = false;
		}
	}
}

int calc(Point start, Point goal)
{
	long long ret = 0;
	queue < pair <Point, int> > q;
	q.push(mp(start, 0));

	while (!q.empty()){
		pair <Point, int> now = q.front();
		q.pop();
		// cout << now.x << " " << now.y << endl;
		if (visited[now.y][now.x]) continue;
		if (now.y == goal.second && now.x == goal.first){
			ret = now.second;
			break;
		}

		visited[now.y][now.x] = true;
		for (int i = 0; i < 4; i++){
			int ny = now.y + dy[i], nx = now.x + dx[i];
			if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
			if (field[ny][nx] == 'X') continue;
			q.push(mp(mp(nx, ny), now.second + 1));
		}
	}

	return ret;
}

int main(void)
{
	cin >> h >> w >> n;
	for (int i = 0; i < h; i++){
		cin >> field[i];
		for (int j = 0; j < w; j++){
			if (field[i][j] == 'S'){
				factory[0] = mp(j, i);
			}
			if ('1' <= field[i][j] && field[i][j] <= '9'){
				factory[field[i][j] - '0'] = mp(j, i);
			}
		}
	}

	long long ret = 0;
	for (int i = 0; i < n; i++){
		visited_clear();
		ret += calc(factory[i], factory[i + 1]);
	}

	cout << ret << endl;
}