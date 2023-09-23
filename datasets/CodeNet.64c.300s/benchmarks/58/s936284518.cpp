#include <iostream>
#include <vector>
#include <algorithm> 
#include <queue>
#include <functional>
using namespace std;

int w, h;
int vx[] = { 1, 0, -1, 0, };
int vy[] = { 0, 1, 0, -1, };
char field[101][101];
bool used[101][101];

void dfs(int x, int y){
    used[x][y] = true;
    for (int i = 0; i < 4; i++){
        int nextx = x + vx[i];
        int nexty = y + vy[i];
        if (0 < nextx && nextx < w + 1 && 0 < nexty && nexty < h + 1 && !used[nextx][nexty]
            && field[nextx][nexty] == field[x][y]){
            dfs(nextx, nexty);
        }
    }

    return;
    
}

int main(void){

    while (true){

        cin >> h >> w;

        if (h == 0 && w == 0) break;

        for (int i = 1; i <= h; i++){
            for (int j = 1; j <= w; j++){
                cin >> field[j][i];
                used[j][i] = false;
            }
        }

        int ans = 0;

        for (int i = 1; i <= w; i++){
            for (int j = 1; j <= h; j++){
                if (!used[i][j]){
                    ans++;
                    dfs(i, j);
                }
            }
        }

        cout << ans << endl;
    }
    

}