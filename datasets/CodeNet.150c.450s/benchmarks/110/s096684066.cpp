#include<iostream>
#include<queue>
using namespace std;

#define REP(var, i, j) for (int var=(i); var<(j); var++)

typedef pair<int, int> P;

//定数
const int MAX_H = 1000;
const int MAX_W = 1000;
const int INF = MAX_H*MAX_W;
//入力
char factory[MAX_H+5][MAX_W+5];
P list[9];

int bfs(int x1, int y1, int x2, int y2){
    int res[MAX_H][MAX_W];
    REP(i, 0, MAX_H){
        REP(j, 0, MAX_W){
            res[i][j] = INF;
        }
    }
    res[x1][y1]  = 0;
    queue<P> que;
    que.push(P(x1, y1));
    while (que.size()){
        P temp = que.front();
        que.pop();
        if (temp.first == x2 && temp.second == y2) break;
        int nx, ny;
        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, 1, 0, -1};

        REP(i, 0, 4){
            nx = temp.first + dx[i];  
            ny = temp.second + dy[i];
            if (factory[nx][ny] == 'X') continue;
            if (res[nx][ny] == INF){
                res[nx][ny] = res[temp.first][temp.second]+1;
                que.push(P(nx, ny));
            } 
        }
    }
    return res[x2][y2];
}

int solve(int x, int y, int N){
    int res = bfs(x, y, list[0].first, list[0].second);
    REP(i, 1, N){
        res += bfs(list[i-1].first, list[i-1].second, list[i].first, list[i].second); 
    }
    return res;
}

int main(){
    //入力
    int H, W, N;
    cin >> H;
    cin >> W;
    cin >> N;
    
    REP(i, 0, MAX_H+5){
        REP(j, 0, MAX_W+5){
            factory[i][j] = 'X';
        }
    }

    char number[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    P S;
    REP(i, 1, H+1){
        REP(j, 1, W+1){
            cin >> factory[i][j];
            REP(k, 0, N){
                if (factory[i][j] == number[k]) list[k] = P(i, j);
            } 
            if (factory[i][j] == 'S') S = P(i, j);
        }
    }
    int res;
    res = solve(S.first, S.second, N);

    cout << res << endl;

    return 0;
}
