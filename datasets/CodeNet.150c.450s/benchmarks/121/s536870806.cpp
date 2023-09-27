#include <iostream>
#include <algorithm>
 
using namespace std;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

char map[101][101];
int owner[101][101];
int H, W, ans;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(const int y, const int x) {
    owner[y][x] = ans;
    rep(i, 4) {
        int mx = x + dx[i];
        int my = y + dy[i];
        if(map[y][x]==map[my][mx] && owner[my][mx] == 0
           && mx >= 0 && my >= 0 && mx < W && my < H) dfs(my, mx);
    }
}


int main(void){
    while(cin >> H >> W && W) {
        rep(i, H) {
            rep(j, W) {
                cin >> map[i][j];
                owner[i][j] = 0;
            }
        }
        ans = 0;
        rep(i, H) {
            rep(j, W) {
                if(owner[i][j] == 0) {
                    ans++;
                    dfs(i, j);
                }
            }
        }
        cout << ans << endl;
    }
}