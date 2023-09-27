#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int h, w, n;
string field[1000];
bool visited[10][1000][1000];
struct state {
	int i, j, d;
};

bool out(int i, int j) {
	return i < 0 || h <= i || j < 0 || w <= j;
}

int search(int i, int j, int num) {
	if(num == n + 1) return 0;
	int sum = 0;
	queue<state> q;
	q.push({ i, j, 0 });
	while(!q.empty()) {
		state s = q.front(); q.pop();
		if(out(s.i, s.j) || field[s.i][s.j] == 'X' || visited[num][s.i][s.j]) continue;
		if(field[s.i][s.j] == '0' + num) {
			sum += s.d;
			break;
		}
		visited[num][s.i][s.j] = true;
		int dir[] = { 1, 0, -1, 0, 1 };
		for(int k = 0; k < 4; k++) {
			if(!visited[num][s.i + dir[k]][s.j + dir[k + 1]])
				q.push({ s.i + dir[k], s.j + dir[k + 1], s.d + 1 });
		}
	}
	for(int ii = 0; ii < h; ii++) {
		for(int jj = 0; jj < w; jj++) {
			if(field[ii][jj] == '0' + num) {
				sum += search(ii, jj, num + 1);
			}
		}
	}
	return sum;
}


int main() {
	cin >> h >> w >> n;
	for(int i = 0; i < h; i++) {
		cin >> field[i];
	}
	for(int i = 0; i < h; i++) {
		for(int j = 0; j < w; j++) {
			if(field[i][j] == 'S') {
				cout << search(i, j, 1) << endl;
				return 0;
			}
		}
	}

}