#include <iostream>
#include <vector>
using namespace std;
#define MAX 50

int c[MAX][MAX];

void dfs(int w, int h, int x, int y);
int main(int argc, char const *argv[]){
    int w, h, ans;

    while (cin>>w>>h, w || h){
        ans = 0;
        for (int i = 0; i < h; i++){
            for (int j = 0; j < w; j++){
                cin>>c[i][j];
            }
        }
        for (int i = 0; i < h; i++){
            for (int j = 0; j < w; j++){
                if (c[i][j] == 1){
                    dfs(w, h, j, i);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

void dfs(int w, int h, int x, int y){
    int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    c[y][x] = 0;

    for (int i = 0; i < 8; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (0 <= nx && nx < w && 0 <= ny && ny < h && c[ny][nx] == 1){
            dfs(w, h, nx, ny);
        }
    }
    return;
}