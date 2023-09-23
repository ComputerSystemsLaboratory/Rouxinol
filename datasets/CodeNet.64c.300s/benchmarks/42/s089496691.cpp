#include <iostream>
#include <algorithm>

using namespace std;

bool map[22][22] = {false};
int main(){
	int m;
	cin >> m;
	while(m != 0){
		int x,y;
		for(int i = 0; i < 22; i++){
			for(int j = 0; j < 22; j++){
				map[i][j] = false;
			}
		}

		for(int i = 0; i < m; i++){
			cin >> x >> y;
			map[x][y] = true;
		}

		int n;
		int ans = 0;
		cin >> n;
		x = y = 10;
		for(int i = 0; i < n; i++){
			char com;
			int move;
			cin >> com >> move;
			if(com == 'N'){
				for(int j = 1; j <= move; j++){
					if(map[x][y + j]){
						map[x][y + j] = false;
						ans++;
					}
				}
				y += move;
			}
			if(com == 'S'){
				for(int j = 1; j <= move; j++){
					if(map[x][y - j]){
						
						map[x][y - j] = false;
						ans++;
					}
				}
				y -= move;
			}
			if(com == 'E'){
				for(int j = 1; j <= move; j++){
					if(map[x + j][y]){
						
						map[x + j][y] = false;
						ans++;
					}
				}
				x += move;
			}
			if(com == 'W'){
				for(int j = 1; j <= move; j++){
					if(map[x - j][y]){
						
						map[x -j][y] = false;
						ans++;
					}
				}
				x -= move;
			}
		}
		if(m == ans){
			cout<< "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}

		cin >> m;
	}
	return 0;
}