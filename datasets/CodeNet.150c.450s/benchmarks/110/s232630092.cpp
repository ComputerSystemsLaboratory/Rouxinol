#include <cstdio>
#include <queue>
using namespace std;

typedef pair<int, int> p;
typedef pair<p, int> dat;
const int size = 1000;

int main(){
	int H, W, N;
	int sx, sy, nx, ny, c, res;
	char field[size + 1][size + 1];
	bool checked[size][size];
	queue<dat> que;
	p point, P, goal;
	dat save;
	
	scanf("%d%d%d", &H, &W, &N);
	for(int i = 0; i < H; i++) scanf("%s", field[i]);
	
	for(int y = 0; y < H; y++){
		for(int x = 0; x < W; x++){
			if(field[y][x] == 'S'){
				point.first = x; point.second = y;
				break;
			}
		}
	}
	
	res = 0;
	for(int i = 0; i < N; i++){
		for(int y = 0; y < H; y++){
			for(int x = 0; x < W; x++){
				if(field[y][x] == i + 49){
					goal.first = x; goal.second = y;
					break;
				}
			}
		}
		for(int y = 0; y < H; y++){
			for(int x = 0; x < W; x++){
				checked[y][x] = false;
			}
		}
		
		save.first = point; save.second = 0;
		que.push(save);
		while(!que.empty()){
			dat d = que.front(); que.pop();
			P = d.first; c = d.second;
			
			nx = P.first; ny = P.second;
			
			if(nx == goal.first && ny == goal.second){
				res += c;
				while(!que.empty()) que.pop();
				break;
			}
			//up
			if(ny > 0 && !checked[ny - 1][nx] && field[ny - 1][nx] != 'X'){
				checked[ny - 1][nx] = true;
				point.first = nx; point.second = ny - 1;
				save.first = point; save.second = c + 1;
				que.push(save);
			}
			//down
			if(ny + 1 < H && !checked[ny + 1][nx] && field[ny + 1][nx] != 'X'){
				checked[ny + 1][nx] = true;
				point.first = nx; point.second = ny + 1;
				save.first = point; save.second = c + 1;
				que.push(save);
			}
			//left
			if(nx > 0 && !checked[ny][nx - 1] && field[ny][nx - 1] != 'X'){
				checked[ny][nx - 1] = true;
				point.first = nx - 1; point.second = ny;
				save.first = point; save.second = c + 1;
				que.push(save);
			}
			//right
			if(nx + 1 < W && !checked[ny][nx + 1] && field[ny][nx + 1] != 'X'){
				checked[ny][nx + 1] = true;
				point.first = nx + 1; point.second = ny;
				save.first = point; save.second = c + 1;
				que.push(save);
			}
		}
		
		point.first = goal.first; point.second = goal.second;
	}
	
	printf("%d\n", res);
	
	return 0;
}