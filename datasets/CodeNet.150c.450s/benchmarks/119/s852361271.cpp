#include <iostream>
using namespace std;

int w, h;
bool state[51][51];

int dx[8] = { 0, 1, 0,-1, 1, 1,-1,-1};
int dy[8] = { 1, 0,-1, 0, 1,-1, 1,-1};

bool isRegion(int x, int y){
    return x >= 0 && x < w && y >= 0 && y < h;
}

void dfs(int x, int y){
    state[x][y] = 0;
    
    for(int i = 0; i < 8; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if(isRegion(nx, ny) && state[nx][ny]){
            dfs(nx, ny);
        }
    }
}

int main(int argc, const char * argv[]) {
    while(1){
        cin >> w >> h;
        if(!w && !h) break;
        for(int y = 0; y < h; y++){
            for(int x = 0; x < w; x++){
                cin >> state[x][y];
            }
        }
        
        int cnt = 0;
        for(int y = 0; y < h; y++){
            for(int x = 0; x < w; x++){
                if(state[x][y]){
                    dfs(x, y);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}