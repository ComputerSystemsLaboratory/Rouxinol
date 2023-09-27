#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int w, h;
char tiles[20][21];

int dx[4] = { 0, 1, 0,-1};
int dy[4] = { 1, 0,-1, 0};

bool isRegion(int x, int y){
    return x >= 0 && x < w && y >= 0 && y < h;
}

int main(){
    while(1){
        cin >> w >> h;
        if(!w && !h) break;
        
        int sx, sy;
        for(int i = 0; i < h; i++){
            cin >> tiles[i];
            for(int j = 0; j < w; j++){
                if(tiles[i][j] == '@'){
                    sx = j; sy = i;
                }
            }
        }
        
        int cnt = 0;
        queue<pair<int, int> > q;
        q.push(make_pair(sx, sy));
        while(!q.empty()){
            cnt++;
            int x = q.front().first, y = q.front().second;
            q.pop();
            
            for(int i = 0; i < 4; i++){
                int nx = x + dx[i], ny = y + dy[i];
                
                if(isRegion(nx, ny) && tiles[ny][nx] == '.'){
                    tiles[ny][nx] = '#';
                    q.push(make_pair(nx, ny));
                }
            }
        }
        cout << cnt << endl;
        
    }
}