#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void dfs(vector<vector<int> > &map, int x, int y){
    map[x][y] = 0;
    for(int dx = -1; dx <= 1; dx++){
        for(int dy = -1; dy <= 1; dy++){
            int nx = x + dx, ny = y + dy;
            if(1 <= nx && nx <= map.size()-2 && 1 <= ny && ny <= map[dx].size()-2 && map[nx][ny] == 1) dfs(map, nx, ny);
        }
    }
}

int main(){
    while(1){
        int W, H;
        cin >> W >> H;
        if(W == 0) break;
    
        vector<vector<int> > map(H+2, vector<int>(W+2));
        for(int i = 1; i <= H; i++){
            for(int j = 1; j <= W; j++){
                cin >> map[i][j];
            }
        }
    
        int res = 0;
        for(int i = 1; i <= H; i++){
            for(int j = 1; j <= W; j++){
                if(map[i][j] == 1){
                    dfs(map, i, j);
                    res++;
                }
            }
        }
    
        cout << res << endl;
    }
    return 0;
}