
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <ctime>
#include <string>
#include <map>
#include <stack>
#include <queue>

using namespace std;

int w, h;
const int MAX = 50;
int c[MAX][MAX];


void check(int x, int y){
	c[x][y] = 0;
    for(int dx = -1; dx <= 1; dx++){
        for(int dy = -1; dy <= 1; dy++){
            if(x + dx >= 0 && x + dx < h  && y + dy >= 0 && y + dy < w && c[x + dx][y + dy] == 1){
            	check(x + dx, y + dy);
            } 
        }
    }
	
}

int main(void){

	for(int i = 0; i < MAX ; i++){
		for(int j = 0; j < MAX; j++){
			c[i][j] = 0;
		}
	}

	cin >> w >> h;
	while(w != 0 && h != 0){
		int ans = 0;
		for(int i = 0; i < h ; i++){
			for(int j = 0; j < w; j++){
				cin >> c[i][j];
			}
		}

		for(int i = 0; i < h ; i++){
			for(int j = 0; j < w; j++){
				if(c[i][j] == 1){
					check(i, j);
					ans++;
				}
			}
		}
		cout << ans << endl;

		cin >> w >> h;
	}
	
    return 0;
}