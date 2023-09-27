#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <utility>

using namespace std;

const int dx[]={1,0,-1,0}, dy[]={0,-1,0,1};

int main(){
    int w, h;
    while(cin >> w >> h && w > 0 && h > 0){
        string tmp;
        pair<int, int> init;
        vector<vector <int> > grid(25, vector<int>(25, -1));
        vector<vector <int> > visited(25, vector<int>(25, 0));
        for(int i = 0; i < h; i++){
            cin >> tmp;
            for (int j = 0; j < w; j++){
                if(tmp[j] == '.'){
                    grid[i][j] = 0;
                }else if(tmp[j] == '#'){
                    grid[i][j] = -1;
                }else if(tmp[j] == '@'){
                    grid[i][j] = 0;
                    init = make_pair(i, j);
                }
            }
        }
        queue<pair<int, int> > Q;
        Q.push(init);
        visited[init.first][init.second] = 1; 
        while(!Q.empty()){
            pair<int, int> cur = Q.front(); 
            Q.pop();
            int cur_x = cur.first;
            int cur_y = cur.second;
            for(int i = 0; i < 4; i++){
                pair<int, int> dst = make_pair(cur_x + dx[i], cur_y + dy[i]);
                int x = dst.first;
                int y = dst.second;
                if(0 <= x && 0 <= y && grid[x][y] == 0 && visited[x][y] == 0){
                    Q.push(dst);
                    visited[x][y] = 1;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < h; i++){
            for (int j = 0; j < w; j++){
                ans += visited[i][j];
            }
        }
        cout << ans << endl;
    }
}