#include <iostream>
#include <queue>
using namespace std;

typedef pair<int, int> Point;
int h, w, n;
string grid[1001];

int bfs(int sx, int sy, int gx, int gy){
    bool visited[1001][1001] = {false};
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    visited[sy][sx] = true;

    queue<pair<Point, int> > que;
    pair<Point, int> state;
    que.push(make_pair(Point(sx, sy), 0));
    while (1){
        state = que.front();
        que.pop();

        if (state.first.first == gx && state.first.second == gy){
            return state.second;
        }

        for (int i = 0; i < 4; i++){
            int nx = state.first.first + dx[i];
            int ny = state.first.second + dy[i];
            if (0 <= nx && nx < w && 0 <= ny && ny < h 
                && grid[ny][nx] != 'X' && visited[ny][nx] == false){
                visited[ny][nx] = true;
                que.push(make_pair(Point(nx, ny), state.second + 1));
            }
        }
    }
}

int main(int argc, char const *argv[]){
    int sx, sy, gx, gy;
    int ans = 0;
    cin>>h>>w>>n;
    for (int i = 0; i < h; i++){
        cin>>grid[i];
    }

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            if (grid[i][j] == 'S'){
                sx = j; sy = i;
            }
            if (grid[i][j] == '1'){
                gx = j; gy = i;
            }
        }
    }

    for (int size = 2; size-1 <= n; size++){
        ans += bfs(sx, sy, gx, gy);

        sx = gx; sy = gy;
        for (int i = 0; i < h; i++){
            for (int j = 0; j < w; j++){
                if (grid[i][j] - '0' == size){
                    gx = j; gy = i;
                }
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}