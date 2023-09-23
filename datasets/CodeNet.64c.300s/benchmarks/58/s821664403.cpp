#include <iostream>

const int MAX_HW = 100;
const int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

void solve();

void dfs(int x, int y, char c);

int H, W;
char field[MAX_HW][MAX_HW] = {0};
int ans = 0;

int main(){
    while(true){
        ans = 0;
        std::cin >> H >> W;
        if(H + W == 0)
            break;
        for(int i = 0; i < H; ++i){
            for(int j = 0; j < W; ++j){
                std::cin >> field[j][i];
            }
        }
        solve();
        std::cout << ans << std::endl;
    }
}

void solve(){
    for(int i = 0; i < W; ++i){
        for(int j = 0; j < H; ++j){
            if(field[i][j] != '.'){
                ++ans;
                dfs(i, j, field[i][j]);
            }
        }
    }
}

void dfs(int x, int y, char c){
    field[x][y] = '.';

    for(int i = 0; i < 4; ++i){
        int nx = x + dx[i], ny = y + dy[i];
        if(nx >= 0 && ny >= 0 && nx < W && ny < H && field[nx][ny] == c)
            dfs(nx, ny, c);
    }
}