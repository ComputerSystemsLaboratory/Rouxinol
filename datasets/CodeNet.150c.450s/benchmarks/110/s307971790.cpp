#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

int h, w;
char n;
char N[1002][1002];
bool p_flag[1002][1002] = { 0 };
int depth[1002][1002] = { 0 };

int main(){
	char next;
	int x, y, time = 0;
	int sx, sy;
	const int dx[4] = { 1, 0, -1, 0 };
	const int dy[4] = { 0, 1, 0, -1 };

	cin >> h >> w >> n;

	for (int i = 0; i < 1002; i++){
		for (int j = 0; j < 1002; j++){
			N[j][i] = 'X';
		}
	}
	for (int i = 1; i <= h; i++){
		for (int j = 1; j <= w; j++){
			cin >> N[j][i];
			if (N[j][i] == 'S'){
				sx = j;
				sy = i;
			}
		}
	}

	queue <pair<int, int>> q;
	q.push(pair<int, int>(sx, sy));
	next = '1';
	bool b_flag = 0;
	p_flag[sx][sy] = 1;
	while (true){
		if (b_flag) break;
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int d = 0; d < 4; d++){
			if (N[x + dx[d]][y + dy[d]] != 'X'){
				if (depth[x + dx[d]][y + dy[d]] == 0) depth[x + dx[d]][y + dy[d]] = depth[x][y] + 1;
				if (p_flag[x + dx[d]][y + dy[d]] == 0){
					if (N[x + dx[d]][y + dy[d]] == next){
						if (next == n){
							cout << depth[x + dx[d]][y + dy[d]] << endl;
							b_flag = 1;
							break;
						}
						else{
							next = next + 1;
							while (!q.empty()) q.pop();
							for (int i = 0; i < 1002; i++){
								for (int j = 0; j < 1002; j++){
									p_flag[j][i] = false;
								}
							}
							q.push(pair<int, int>(x + dx[d], y + dy[d]));
							p_flag[x + dx[d]][y + dy[d]] = 1;
							int dep = depth[x + dx[d]][y + dy[d]];
							for (int i = 0; i < 1002; i++){
								for (int j = 0; j < 1002; j++){
									depth[j][i] = 0;
								}
							}
							depth[x + dx[d]][y + dy[d]] = dep;
							break;
						}
					}
					else {
						q.push(pair<int, int>(x + dx[d], y + dy[d]));
						p_flag[x + dx[d]][y + dy[d]] = 1;
					}
				}
			}
		}
	}
}