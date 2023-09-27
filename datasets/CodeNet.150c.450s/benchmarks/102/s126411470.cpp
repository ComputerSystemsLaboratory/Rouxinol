#include <iostream>
#include <vector>
#include <algorithm> 
#include <queue>
#include <functional>
using namespace std;

int w, h;
int vx[4] = { 1, 0, -1, 0 };
int vy[4] = { 0, 1, 0, -1 };
bool used[25][25];
char c[25][25];

int dfs(int x, int y){
    int ret = 1;
    for (int i = 0; i < 4; i++){
        int nextx = x + vx[i];
        int nexty = y + vy[i];

        if (0 < nextx && nextx < w + 1 && 0 < nexty && nexty < h + 1 && c[nextx][nexty] == '.' && !used[nextx][nexty]){
            used[nextx][nexty] = true;
            ret += dfs(nextx, nexty);
        }
    }

    return ret;
    
}

int main(void){

    while (true){

        cin >> w >> h;

        if (w == 0 && h == 0)break;

        for (int i = 0; i <= 20; i++){
            for (int j = 0; j <= 20; j++){
                used[i][j] = false;
            }
        }

        int sx, sy;

        for (int i = 1; i <= h; i++){
            for (int j = 1; j <= w; j++){
                cin >> c[j][i];
                if (c[j][i] == '@'){
                    sx = j; sy = i;
                }
            }
        }

        cout << dfs(sx, sy) << endl;
    }
 

}