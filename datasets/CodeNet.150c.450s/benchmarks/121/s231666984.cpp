#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> s;
int h, w;
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

void dfs(int x, int y, char c){
    if(s[x][y] != c) return;
    s[x][y] = '.';
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || nx >= h || ny < 0 || ny >= w)continue;
        if(s[nx][ny] == c)dfs(nx,ny,c);
    }
    return;
}

int main(){
    while(cin >> h >> w, h){
        vector<string> in(h);
        for(int i = 0; i < h; i++) cin >> in[i];
        s = in;
        int ans = 0;
        for(int i = 0; i < h; i++)for(int j = 0; j < w; j++){
            if(s[i][j] != '.'){
                ans++;
                dfs(i,j,s[i][j]);
            }
        }
        cout << ans << endl;
    }
}

