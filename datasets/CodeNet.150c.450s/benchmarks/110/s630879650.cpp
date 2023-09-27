#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <queue>

using namespace std;

typedef pair <int, int> point;
typedef pair < point, int> kotori;
// 2130
static const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
static const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

bool vst[1280][1280];
string field[1280];
int h, w, n;

void vst_clear(void)
{
	for (int i = 0; i < 1280; i++){
		for (int j = 0; j < 1280; j++){
			vst[i][j] = false;
		}
	}
}

bool is_region(int y, int x)
{
	return (0 <= y) && (y < h) && (0 <= x) && (x < w);
}

int main(void)
{
	//ios::sync_with_stdio(0); cin.tie(0);

	point start, goal;
	point f[10];

	cin >> h >> w >> n;
	for (int i = 0; i < h; i++){
		cin >> field[i]; cin.ignore();
		for (int j = 0; j < w; j++){
			if (field[i][j] == 'S'){
				field[i][j] = '0';
			}
			if (isdigit(field[i][j])){
				f[field[i][j] - '0'] = make_pair(i, j);
			}
		}
	}

	int ret = 0;
	for (int g = 1; g <= n; g++){
		// cout << g-1 << " done" << endl;
		vst_clear();
		start = f[g - 1];
		goal = f[g];

		queue < kotori > q;
		kotori a;
		a.first = start;
		a.second = 0;
		q.push(a);
		// point, step;
		while (!q.empty()){
			kotori hanayo = q.front(); q.pop();
			int x = hanayo.first.second, y = hanayo.first.first;
			// cout << y << " " << x << endl;
			if (vst[y][x]) continue;
			vst[y][x] = true;
			if (hanayo.first == goal){
				ret += hanayo.second;
				break;
			}
			for (int i = 0; i < 4; i++){
				int ny = hanayo.first.first + dy[i], nx = hanayo.first.second + dx[i];
				if (!is_region(ny, nx)) continue;
				if (vst[ny][nx]) continue;
				if (field[ny][nx] == 'X') continue;
				kotori p; p.first = make_pair(ny, nx); p.second = hanayo.second + 1;
				q.push(p);
			}
		}
	}
	cout << ret << endl;

	return 0;
}