#include <bits/stdc++.h>

#define INF 1000000

using namespace std;

int H, W, N, sy, sx, k[1001][1001];
char c[1001][1001];
queue<pair<int, int>> q;

void reset(int y, int x){
    int i, j;

    while(!q.empty())q.pop();

    for(i = 0; i < 1001; i++){
        for(j = 0; j < 1001; j++){
            if(i != y || j != x){
                k[i][j] = INF;
            }
        }
    }

    q.push(make_pair(y, x));
}

int solve(int n){
    int y, x;

    while(!q.empty()){
        y = q.front().first;
        x = q.front().second;
        q.pop();
        if(c[y][x] == n + '0'){
            break;
        }
        if(x > 0 && c[y][x - 1] != 'X' && k[y][x - 1] == INF){
            q.push(make_pair(y, x - 1));
            k[y][x - 1] = k[y][x] + 1;
        }
        if(x < W - 1 && c[y][x + 1] != 'X' && k[y][x + 1] == INF){
            q.push(make_pair(y, x + 1));
            k[y][x + 1] = k[y][x] + 1;
        }
        if(y > 0 && c[y - 1][x] != 'X' && k[y - 1][x] == INF){
            q.push(make_pair(y - 1, x));
            k[y - 1][x] = k[y][x] + 1;
        }
        if(y < H - 1 && c[y + 1][x] != 'X' && k[y + 1][x] == INF){
            q.push(make_pair(y + 1, x));
            k[y + 1][x] = k[y][x] + 1;
        }
    }
    sy = y;
    sx = x;

    return y * W + x;
}

int main()
{
    int i, j, z;

    cin >> H >> W >> N;
    for(i = 0; i < H; i++){
        for(j = 0; j < W; j++){
            cin >> c[i][j];
            if(c[i][j] == 'S'){
                sy = i;
                sx = j;
            }
        }
    }
    k[sy][sx] = 0;

    for(i = 1; i <= N; i++){
        reset(sy, sx);
        z = solve(i);
    }

    cout << k[z / W][z % W] << endl;
}