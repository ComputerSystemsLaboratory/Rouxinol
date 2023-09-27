#include <iostream>
#include <queue>
#define min(x,y) ((x)<(y)?(x):(y))
#define INFI 100000000

using namespace std;
typedef pair<int, int> P;

int Strength = 1;
char Maps[1010][1010];
int dist[1010][1010];
int H, W, N;
int hor[] = {1,0,-1,0};
int ver[] = {0,-1,0,1};
int ans;


void clear();
void show();
P bfs(int cheese,P n);

int main(void) {
    cin>>H>>W>>N;
    P s,e;
    for (int i = 0; i<H; i++)
        cin>>Maps[i];
    for (int i = 0; i<H; i++)
        for (int j = 0; j<W; j++)
            if (Maps[i][j]=='S') s.first = i, s.second = j;
    
    
    for (int i = 1; i<=N; i++) {
        clear();
        s = bfs(i, s);
    }
    
    cout<<ans<<endl;
    return 0;
}

P bfs(int cheese,P n) {
    queue<P> que;
    que.push(n);
    dist[n.first][n.second] = 0;
    
    P top;
    while (que.size()) {
        top = que.front();
        if (Maps[top.first][top.second]-'0'==cheese) {
            ans += dist[top.first][top.second];
            break;
        }
        
        que.pop();
        for (int i = 0; i<4; i++) {
            int nv = top.first+ver[i], nh = top.second+hor[i];
            if (nv>=0 && nv<H && nh>=0 && nh<W && dist[nv][nh]==INFI && Maps[nv][nh]!='X') {
                que.push(P(nv,nh));
                dist[nv][nh] = min(dist[nv][nh], dist[top.first][top.second]+1);
            }
        }
    }
    return top;
}

void clear() {
    for (int i = 0; i<H; i++)
        for (int j = 0; j<W; j++)
            dist[i][j] = INFI;
}