#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)
const int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};

int W, H;

inline bool inrect(int x, int y){
    return 0 <= x && x < H && 0 <= y && y < W;
}

int dfs(vector<string>& room, int x, int y){
    room[x][y] = '#';
    int res = 1;
    rep(i, 4){
        int nx = x + dx[i], ny = y + dy[i];
        if(!inrect(nx, ny) || room[nx][ny] == '#')continue;
        res += dfs(room, nx, ny);
    }
    return res;
}

int main(){
    while(cin >> W >> H, W|H){
        vector<string> room(H);
        int sx = -1, sy = -1;
        rep(i, H){
            cin >> room[i];
            rep(j, W)if(room[i][j] == '@')sx = i, sy = j;
        }
        cout << dfs(room, sx, sy) << '\n';
    }
    return 0;
}