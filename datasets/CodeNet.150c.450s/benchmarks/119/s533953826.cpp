#include <bits/stdc++.h>

using namespace std;

int w, h;
int graph[50][50];
int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[] = {-1, -1, -1, 0, 1, 1, 1, 0};

void solve(int y, int x) {
    graph[y][x] = 0;
    for(int i = 0; i < 8; ++i) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny >= 0 && ny < h && nx >= 0 && nx < w && graph[ny][nx]) {
            solve(ny, nx);
        }
    }
}

int main() {

    while(cin >> w >> h, w | h) {

        int cnt = 0;

        for(int i = 0; i < h; ++i) {
            for(int j = 0; j < w; ++j) {
                cin >> graph[i][j];
            }
        }

        for(int i = 0; i < h; ++i) {
            for(int j = 0; j < w; ++j) {
                if(graph[i][j]) {
                    solve(i, j);
                    ++cnt;
                }
            }
        }

        cout << cnt << endl;

    }

}