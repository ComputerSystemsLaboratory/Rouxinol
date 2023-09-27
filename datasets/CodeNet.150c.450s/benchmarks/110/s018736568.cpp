#include <iostream>
#include <queue>
using namespace std;
typedef pair<int, int> P;

const int MAX_H = 1000, MAX_W = 1000;
int h, w, n, loop = 0, ans, dis[MAX_H][MAX_W] = {};
char town[MAX_H][MAX_W], list[10] = "123456789";
bool reached[MAX_H][MAX_W];
queue <P> place;
P xy;

int solve(){
	int dx[4] = {0, 0, -1, 1}, dy[4] = {-1, 1, 0, 0};
	
	while(1){
		xy = place.front();
		place.pop();
		for(int i = 0; i < 4; i++){
			int x = xy.first + dx[i], y = xy.second + dy[i];
			
			if(x < 0 || x >= h || y < 0 || y >= w){
				continue;
			}
			if(town[x][y] == 'X' || reached[x][y] == 1){
				continue;
			}
			
			reached[x][y] = 1;
			dis[x][y] = dis[xy.first][xy.second] + 1;
			place.push(P(x, y));
			
			if(town[x][y] == list[loop]){
				loop++;
				if(loop == n){
					return dis[x][y];
				} else{
					for(int i = 0; i < h; i++){
						for(int j = 0; j < w; j++){
							reached[i][j] = 0;
						}
					}
					reached[x][y] = 1;
				
					while(place.size() != 1){
						place.pop();
					}
					
					break;
				}
			}
		}
	}
}

int main() {
	cin >> h >> w >> n;
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			cin >> town[i][j];
			
			if(town[i][j] == 'S'){
				reached[i][j] = 1;
				place.push(P(i, j));
			}
		}
	}
	
	cout << solve() << endl;
	
	return 0;
}