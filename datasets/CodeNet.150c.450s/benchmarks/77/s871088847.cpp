#include <iostream>
using namespace std;

int N, M, cnt;
int Map[21][21];

struct Position{
	int x;
	int y;
}robot;

void initMap(void){
	int i, j;
	for(i = 0; i < 21; i++){
		for(j = 0; j < 21; j++){
			Map[i][j] = 0;
		}
	}
}

void setGems(int x, int y){
	Map[x][y] = 1;
}

int main(){
	int x, y, step;
	char dir;
	while(true){
		initMap();
		cnt = 0;
		robot.x = 10; robot.y = 10;
		cin >> N;
		if(N == 0)	break;
		for(int i = 0; i < N; i++){
			cin >> x >> y;
			setGems(x, y);
		}
		cin >> M;
		for(int i = 0; i < M; i++){
			cin >> dir >> step;
			switch(dir){
				case 'N':
					for(int i = 0; i < step; i++){
						robot.y++;
						if(Map[robot.x][robot.y] == 1)	cnt++; Map[robot.x][robot.y] = 0;
					}
					break;
				case 'E':
					for(int i = 0; i < step; i++){
						robot.x++;
						if(Map[robot.x][robot.y] == 1)	cnt++; Map[robot.x][robot.y] = 0;
					}
					break;
				case 'S':
					for(int i = 0; i < step; i++){
						robot.y--;
						if(Map[robot.x][robot.y] == 1)	cnt++; Map[robot.x][robot.y] = 0;
					}
					break;
				case 'W':
					for(int i = 0; i < step; i++){
						robot.x--;
						if(Map[robot.x][robot.y] == 1)	cnt++; Map[robot.x][robot.y] = 0;
					}
					break;
				default:
					break;

			}
		}
		if(cnt == N){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;	
		}
	}
	return 0;
}