#include<iostream>
#include<queue>
using namespace std;

void zero();

struct p{
	int x, y, cnt;
};
int H, W, N;
int tizu[1001][1001];
bool flag[1001][1001] = { false };
int main(){
	queue<p> que;
	char a;
	char h[10] = "123456789";
	cin >> H >> W >> N;
	for (int i = 0; i < H; i++){
		for (int j = 0; j < W; j++){
			cin >> a;
			if (a == 'S'){
				tizu[i][j] = 0;
				p temp;
				temp.x = j;
				temp.y = i;
				temp.cnt = 0;
				que.push(temp);
			}
			else if (a == 'X'){
				tizu[i][j] = -1;
			}
			else if (a == '.'){
				tizu[i][j] = 0;
			}
			else {
				for (int k = 0; k < 9; k++){
					if (h[k] == a){
						tizu[i][j] = k + 1;
					}
				}

			}
			//cout << tizu[i][j];
		}
		//cout << endl;
	}
	int max = 1;
	int step = 0;
	while (!que.empty()){
		p temp = que.front();
		que.pop();
		if (tizu[temp.y][temp.x] == max){
			max++;
			while (!que.empty()) que.pop();
			if (max - 1 == N) {
				max = temp.cnt;
				break;
			}
			zero();
		}
		if (flag[temp.y][temp.x] == true) continue;
		flag[temp.y][temp.x] = true;
		for (int i = 0; i < 4; i++){
			int dx[4] = { 1, -1, 0, 0 };
			int dy[4] = { 0, 0, 1, -1 };
			int yy = temp.y + dy[i];
			int xx = temp.x + dx[i];
			if (yy > -1 && xx > -1 && yy < H && xx < W && tizu[yy][xx] != -1){
				p tt;
				tt.y = yy;
				tt.x = xx;
				tt.cnt = temp.cnt + 1;
				que.push(tt);
			}
		}
	}
	cout << max << endl;
	return 0;
}
void zero(){
	for (int i = 0; i < H; i++){
		for (int j = 0; j < W; j++){
			flag[i][j] = false;
		}
	}
}