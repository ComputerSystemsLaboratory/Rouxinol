#include <iostream>
#include <queue>
using namespace std;

#define MaxW 1000
#define MaxH 1000
#define MaxN 1000
#define INF 99999
int H,W,N;
int d[MaxN + 1][MaxN + 1];
char pos[MaxH][MaxW];
int dx[4] = {-1,0,1,0},dy[4] = {0,1,0,-1};
bool visited[MaxH][MaxW];

typedef struct Node{
    int x,y;
}Node;

bool judge(int x, int y){
    if (x >= 0 && x < H && y>= 0 && y< W){
        return true;
    }
    return false;
}

int bfs(int s, int e){
    queue<Node> Q;
    int sx,sy,ex,ey;//record the position of start and end point
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            visited[i][j] = false;
            d[i][j] = 0;
            if (pos[i][j] - '0' == s){
                sx = i;sy = j;
            } else if(pos[i][j] - '0' == e){
                ex = i;ey = j;
            }
        }
    }
    Node S;
    S.x = sx;
    S.y = sy;
    Q.push(S);
    visited[sx][sy] = true;
    bool find = false;

    while(!Q.empty()){
        Node T = Q.front();
        Q.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = T.x + dx[i];
            int ny = T.y + dy[i];
            if (!visited[nx][ny] && judge(nx, ny) && pos[nx][ny] != 'X') {
                Node p;
                p.x = nx;
                p.y = ny;
                Q.push(p);
                visited[nx][ny] = true;
                d[nx][ny] = d[T.x][T.y] + 1;
            }
            if (nx == ex && ny == ey){
                find = true;
                break;
            }
        }
        if(find == true)
            break;
    }
    return d[ex][ey];
}

int main(){
    while(cin>>H>>W>>N){
        if (H == 0 && W == 0 )
            break;
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {
                cin>>pos[i][j];
                if (pos[i][j] == 'S')
                    pos[i][j] = '0';
            }
        }
        for (int k = 0; k < H; ++k) {
            for (int i = 0; i < W ; ++i) {
                d[k][i] = 0;
            }
        }int t = 0;
        for (int l = 0; l < N; ++l) {
            t += bfs(l,l+1);
        }

        cout<<t<<endl;
    }

    return 0;
}
