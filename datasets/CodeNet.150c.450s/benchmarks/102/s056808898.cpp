#include <iostream>
#include <string>
using namespace std;

int w,h;
string room[20];

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

inline bool isRegion(int x, int y){
    return x >= 0 && y >= 0 && x < w && y < h;
}

int dfs(int x, int y){
    int cnt = 1;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i], ny = y + dy[i];
        
        if(isRegion(nx,ny) && room[ny][nx] == '.'){
            room[ny][nx] = '#';
            cnt += dfs(nx, ny);
        }
    }
    return cnt;
}

int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        cin >> w >> h;
        if(!w && !h) break;
        
        int sx, sy;
        for(int i = 0; i < h; i++){
            cin >> room[i];
            if(room[i].find('@') != -1){
                sx = room[i].find('@');
                sy = i;
            }
        }
        
        cout << dfs(sx, sy) << endl;
        
    }
}