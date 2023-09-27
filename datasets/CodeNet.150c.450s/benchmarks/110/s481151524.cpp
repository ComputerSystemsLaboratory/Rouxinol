#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define itrep(it, a) for(it = (a).begin(); it != (a).end; it++)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
#define INF (1 << 30)
using namespace std;

#define N 1005

char M[N][N];
int dy[4] = {0,1,0,-1}, dx[4] = {1,0,-1,0};
int cnt = 0;

struct point{
    int x,y;
};

point solve(struct point p, int n, char cheese){
    int dist[N][N];
    queue<point> q;
    rep(i,N) rep(j,N) dist[i][j] = INF;

    dist[p.y][p.x] = 0;
    q.push(p);
    struct point u;
    while(!q.empty()){
        //debug(q.size())
        u = q.front(); q.pop();
        rep(i,4){
            struct point a;
            a.x = u.x + dx[i];
            a.y = u.y + dy[i];
            //debug(M[a.y][a.x])
            if(M[a.y][a.x] != 'X' && dist[a.y][a.x] == INF){
                dist[a.y][a.x]  = dist[u.y][u.x] + 1;
                q.push(a);
                //debug(dist[a.y][a.x])
                if(M[a.y][a.x] == cheese){
                    cnt += dist[a.y][a.x];
                    return a;
                }
            }
        }
    }
    return p;
}

int main(){
    int h, w, n, ans = 0;
    struct point p;
    cin >> h >> w >> n;
    rep(i,N) rep(j,N) M[i][j] = 'X';
    range(i,1,h + 1){
        range(j,1,w + 1){
            cin >> M[i][j];
            if(M[i][j] == 'S'){
                p.x = j;
                p.y = i;
            }
        }
    }
    rep(i,n){
        p = solve(p,n,'1' + i);
    }
    cout << cnt << endl;
}