#include <iostream>
#include <queue>
#include <utility>
using namespace std;
typedef pair<int, int> P;

int res,W,H,tile[20][20];
P start;

int bfs()
{
	int res = 1;
	queue<P> a;
	a.push(start);
	while (!a.empty()) {
		P temp = a.front();
		a.pop();
		if (temp.first + 1 < W && tile[temp.first + 1][temp.second]) {
			tile[temp.first + 1][temp.second] = 0;
			res++;
			a.push(P(temp.first + 1, temp.second));
		}
		if (temp.first - 1 >= 0 && tile[temp.first - 1][temp.second]) {
			tile[temp.first - 1][temp.second] = 0;
			res++;
			a.push(P(temp.first - 1, temp.second));
		}
		if (temp.second + 1 < H && tile[temp.first][temp.second + 1]) {
			tile[temp.first][temp.second + 1] = 0;
			res++;
			a.push(P(temp.first, temp.second + 1));
		}
		if (temp.second - 1 >= 0 && tile[temp.first][temp.second - 1]) {
			tile[temp.first][temp.second - 1] = 0;
			res++;
			a.push(P(temp.first, temp.second - 1));
		}
	}
	return res;
}

int main()
{
	char ch;
	while (cin >> W >> H, W || H) {
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				cin >> ch;
				if (ch == '.') {
					tile[j][i] = 1;
				}
				else if (ch == '#') {
					tile[j][i] = 0;
				}
				else {
					tile[j][i] = 0;
					start = P(j,i);
				}
			}
		}
		cout << bfs() << endl;
	}
	return 0;
}