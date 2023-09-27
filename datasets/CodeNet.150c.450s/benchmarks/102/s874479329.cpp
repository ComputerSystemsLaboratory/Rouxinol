#include <bits/stdc++.h>
using namespace std;
int w, h, cnt;
int vx[] = {0, 1, 0, -1};
int vy[] = {1, 0, -1, 0};
char field[20][20];
void solve(int x, int y){
    ++cnt;
    field[y][x] = '#';
    for(int i = 0; i < 4; ++i){
        int nx = x + vx[i];
        int ny = y + vy[i];
        if(nx >= 0 && nx < w && ny >= 0 && ny < h && field[ny][nx] == '.')
            solve(nx, ny);
    }
}
int main(){
    int sx, sy;
    while(cin >> w >> h){

        if(!(w || h)) break;
        for(int i = 0; i < h; ++i){
            for(int j = 0; j < w; ++j){
                cin >> field[i][j];
                if(field[i][j] == '@'){
                    sx = j;
                    sy = i;
                }
            }
        }
        cnt = 0;

        solve(sx, sy);
        cout << cnt << endl;
    }
}