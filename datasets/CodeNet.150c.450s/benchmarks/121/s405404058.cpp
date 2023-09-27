#include <bits/stdc++.h>
using namespace std;
int h, w;
int vx[] = {0, 1, 0, -1};
int vy[] = {1, 0, -1, 0};
char field[100][100];
void solve(int x, int y, char mark){
    field[y][x] = '.';
    for(int i = 0; i < 4; ++i){

        int nx = x + vx[i];
        int ny = y + vy[i];
        if(nx >= 0 && nx < w && ny >= 0 && ny < h && field[ny][nx] == mark){
            solve(nx, ny, mark);
        }
    }
}
int main(){

    int cnt;
    while(cin >> h >> w){
        if(!(h || w)) break;
        cnt = 0;
        for(int i = 0; i < h; ++i){
            for(int j = 0; j < w; ++j){
                cin >> field[i][j];
            }
        }
        for(int i = 0; i < h; ++i){
            for(int j = 0; j < w; ++j){
                if(field[i][j] != '.'){
                    ++cnt;
                    solve(j, i, field[i][j]);
                }
            }
        }
        cout << cnt << endl;
    }
}