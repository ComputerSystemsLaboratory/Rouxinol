#include<iostream>

using namespace std;
int H, W, ans;
char map[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int y, int x, char item){
        if(map[y][x] != item) return;
        map[y][x] = '.';
        int xx, yy;
        for(int i = 0; i < 4; i++){
                xx = x + dx[i];
                yy = y + dy[i];
                if(xx >= 0 && xx < W && yy >= 0 && yy < H){
                        dfs(yy, xx, item);
                }
        }
}

void solve(){
        ans = 0;
        for(int i = 0; i < H; i++){
                for(int j = 0; j < W; j++){
                        cin >> map[i][j];
                }
        }

        for(int i = 0; i < H; i++){
                for(int j = 0; j < W; j++){
                        if(map[i][j] != '.'){
                                dfs(i, j, map[i][j]);
                                ans++;
                        }
                }
        }

}
int main(){
        ios_base::sync_with_stdio(false);
        while(cin >> H >> W && H > 0 && W > 0){
                solve();
                cout << ans << endl;
        }
        return 0;
}
