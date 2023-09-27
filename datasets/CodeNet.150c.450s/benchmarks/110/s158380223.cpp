#include <iostream>
#include <queue>

using namespace std;
const int INF = -1;
const int MaxH = 1000;
const int MaxW = 1000;
const int MaxN = 10;
int h,w;
char ma[MaxH][MaxW];
int dx[4] = {1,0,-1,0};
int dy[4] = {0, 1, 0, -1};
int N;
int res;
int cx[10], cy[10];
int t[MaxH][MaxW];
typedef pair<int,int> P;

int dfs(int start){
    queue<P> que;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            t[i][j] = INF;
        }
    }
    int sx = cx[start];
    int sy = cy[start];
    int ex = cx[start+1];
    int ey = cy[start+1];
    que.push(P(sy,sx));
    t[sy][sx] = 0;
    while(que.size()){
        P p = que.front();
        que.pop();
        if(p.first == ey && p.second == ex) break;
        for(int i = 0; i< 4; i++){
            int ny = p.first + dy[i];
            int nx = p.second + dx[i];
            if (0 <= nx && nx < w && 0 <= ny && ny < h && ma[ny][nx] != 'X' && t[ny][nx] == INF){
                t[ny][nx] = t[p.first][p.second] + 1;
                que.push(P(ny,nx));
            }
        }
    }
    return t[ey][ex];
}

void solve(){
    res = 0;
    cin >> h >> w >> N;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> ma[i][j];
            if(ma[i][j] == 'S'){
                cx[0] = j;
                cy[0] = i;
            }
            if(ma[i][j] >= '1' && ma[i][j] <= '9' ){
                cx[ma[i][j] - '0'] = j;
                cy[ma[i][j] - '0'] = i;
            }
        }
    }
    for (int i = 0; i < N;i++){
        res += dfs(i);
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    solve();
    return 0;
}
