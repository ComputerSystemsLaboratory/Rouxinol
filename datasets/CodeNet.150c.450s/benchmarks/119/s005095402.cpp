#include <iostream>
#include <vector>
using namespace std;
int ans;
int w, h;
//?§???????
const int mx[] = {-1, 0, 1, -1, 1, -1, 0, 1 };
const int my[] = { 1, 1, 1, 0, 0, -1, -1, -1};
vector<int> vx;
vector<int> vy;

vector<vector<int> > area;
int islands = 0;

//????±????????????¨????????¢?´¢
void dfs(int i,int j){
	for (int n = 0; n < vx.size(); n++){
		int x = j + vx[n];
		int y = i + vy[n];
		if (x >= 0 && x < w &&
			y >= 0 && y < h &&
			area[y][x] == 1){
			area[y][x] = 2;
			dfs(y,x);
		}
	}
}

int main(){
	for (int i = 0; i < 8; i++){
		vx.push_back(mx[i]);
		vy.push_back(my[i]);
	}
	while (1){
		cin >> w >> h;
		if (w == 0 && h == 0) break;
		//?????????
		islands = 0;
		area.clear();
		area = vector<vector<int> >(h, vector<int>(w));
		//??\???
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				cin >> area[i][j];
			}
		}
		//??¨??¢?´¢
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				if (area[i][j] == 1){
					islands++;
					area[i][j] = 2;
					dfs(i, j);
				}
			}
		}
		cout << islands << endl;
	}
	return 0;
}