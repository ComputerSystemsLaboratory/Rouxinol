#include <iostream>
using namespace std;

char c[21][21];
int w, h;
int sy, sx;
int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, 1, -1};
bool f[21][21];
int ans = 0;

void dfs(int y, int x){
    f[y][x] = true;
    ans++;
    for(int i = 0; i < 4; i++){
        int newy = y + dy[i];
        int newx = x + dx[i];
        if(0 <= newy && newy < h && 0 <= newx && newx < w && f[newy][newx] == false && c[newy][newx] != '#'){
            dfs(newy, newx);
        }
    }
    return;
}

int main(){
    while(cin >> w >> h, w, h){
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                cin >> c[i][j];
                if(c[i][j] == '@'){
                    sy = i;
                    sx = j;
                }
                f[i][j] = false;
            }
        }
        ans = 0;
        dfs(sy, sx);
        cout << ans << endl;
    }
}