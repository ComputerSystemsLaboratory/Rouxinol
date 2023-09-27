#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;
const int INF = 8101919;
const int MAX_H = 1000;
const int MAX_W = 1000;
const int MAX_N = 10;
struct pt {
	int x;
	int y;
};
int h;
int w;
int n;
pt cheese[MAX_N];
queue<pt> nextsearch;
pt st;
int cost[MAX_H][MAX_W];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { -1,0,1,0 };
vector<string> field;
int mousehp = 1;
int bfs() {
	for (int i = 0; i < MAX_N; i++) {
		cheese[i].x = INF;
		cheese[i].y = INF;
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cost[i][j] = INF;
			if (field[i][j] == 'S') {
				st.x = j;
				st.y = i;
				cost[i][j] = 0;
			}
			switch (field[i][j]) {
			case '1':
				cheese[1].x = j;
				cheese[1].y = i;
				break;
			case '2':
				cheese[2].x = j;
				cheese[2].y = i;
				break;
			case '3':
				cheese[3].x = j;
				cheese[3].y = i;
				break;
			case '4':
				cheese[4].x = j;
				cheese[4].y = i;
				break;
			case '5':
				cheese[5].x = j;
				cheese[5].y = i;
				break;
			case '6':
				cheese[6].x = j;
				cheese[6].y = i;
				break;
			case '7':
				cheese[7].x = j;
				cheese[7].y = i;
				break;
			case '8':
				cheese[8].x = j;
				cheese[8].y = i;
				break;
			case '9':
				cheese[9].x = j;
				cheese[9].y = i;
				break;
			default:
				break;
			}
		}
	}
	nextsearch.push(st);
	int searchCheese = 1;
	int allcost;
	while (nextsearch.size()) {
		pt queuefirst = nextsearch.front();
		nextsearch.pop();
		if (queuefirst.x == cheese[searchCheese].x && queuefirst.y == cheese[searchCheese].y && field[queuefirst.y][queuefirst.x] - '0' <= mousehp) {
			searchCheese++;
			mousehp++;
			field[queuefirst.y][queuefirst.x] = '.';
			if (searchCheese > n) {
				allcost = cost[queuefirst.y][queuefirst.x];
				break;
			}
			queue<pt> empty;
			swap(nextsearch,empty);
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < w; j++) {
					if (queuefirst.x == j && queuefirst.y == i) {
					} else {
						cost[i][j] = INF;
					}
				}
			}
		}
		for (int i = 0; i < 4; i++) {
			pt nextp;
			nextp.x = queuefirst.x + dx[i];
			nextp.y = queuefirst.y + dy[i];
			if (0 <= nextp.x && nextp.x < w && 0 <= nextp.y && nextp.y < h && field[nextp.y][nextp.x] != 'X' && cost[nextp.y][nextp.x] == INF) {
				nextsearch.push(nextp);
				cost[nextp.y][nextp.x] = cost[queuefirst.y][queuefirst.x] + 1;
			}
		}
	}
	return allcost;
}
int main() {
	cin >> h >> w >> n;

	string inputtmp;
	for (int i = 0; i < h; i++) {
		cin >> inputtmp;
		field.push_back(inputtmp);
	}
	cout << bfs() << endl;
	return 0;
}
