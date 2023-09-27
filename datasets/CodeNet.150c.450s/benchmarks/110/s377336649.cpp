#include <iostream>
#include <queue>
#include <utility>
using namespace std;

typedef pair<int, int> P;

int main(void){
    int h, w, d[1001][1001], sx, sy, sum = 0, cnt=0, n;
    char maze[1001][1001], num[9] = {'1','2','3','4','5','6','7','8','9'};
    cin >> h >> w >> n;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            d[i][j] = 0;
            cin >> maze[i][j];
            if(maze[i][j] == 'S'){
                sy = i;
                sx = j;
            }
        }
    }
    queue<P> que;
    que.push(P(sx, sy));

    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

    while(que.size()){
        P p = que.front();
        que.pop();
        if(cnt == n){
            cout << sum << endl;
            return 0;
        }

        for(int i=0;i<4;i++){
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if(0<=nx && nx<w && 0<=ny && ny<h && maze[ny][nx] != 'X' && d[ny][nx] == 0){
                d[ny][nx] = d[p.second][p.first] + 1;
                que.push(P(nx, ny));
                // cout << nx << " " << ny << " "<< maze[ny][nx] << endl;
                if(maze[ny][nx] == num[cnt]){
                    // cout << nx << " " << ny << " "<< maze[ny][nx] << endl;
                    sum += d[ny][nx];
                    //que?????????????????????
                    while(que.size()){
                        que.pop();
                    }
                    //???????????¢????????????
                    for(int i=0;i<h;i++){
                        for(int j=0;j<w;j++){
                            d[i][j] = 0;
                        }
                    }
                    que.push(P(nx, ny));
                    cnt++;
                    break; //for????????????
                }
            }
        }
    }
    return 0;
}   