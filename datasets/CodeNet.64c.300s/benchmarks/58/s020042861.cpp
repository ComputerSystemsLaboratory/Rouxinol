#include <iostream>
using namespace std;
const int N = 111;
int w, h, ans;
char ch, maze[N][N];
const int cx[] = {1, -1, 0, 0}, cy[] = {0, 0, 1, -1};
void dfs(int x, int y){
    maze[x][y] = '-';
    for(int i = 0; i < 4; ++i){
        int nx = x + cx[i], ny = y + cy[i];
        if(0 <= nx && nx < h && 0 <= ny && ny < w && maze[nx][ny] == ch)
            dfs(nx, ny);
    }
}
int main(){
    while(cin >> h >> w, (h && w)){
        for(int i = 0; i < h; ++i)
            for(int j = 0; j < w; ++j)
                cin >> maze[i][j];
        ans = 0;
        for(int i = 0; i < h; ++i)
            for(int j = 0; j < w; ++j){
                if(maze[i][j] != '-'){
                    ch = maze[i][j];
                    ++ans;
                    dfs(i, j);
                }
            }
        cout << ans << endl;
    }
    return 0;
}