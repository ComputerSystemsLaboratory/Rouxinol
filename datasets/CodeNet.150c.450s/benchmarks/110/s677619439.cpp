#include<iostream>
#include<queue>
#define fi first
#define se second

using namespace std;
typedef pair<int, int> pii;
const int inf=1e9;
const pii d[]={{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int H, W, dis[1000][1000];
char N, fld[1000][1000];
pii start;

int bfs(char num){
    queue<pii> qu;
    qu.push(start);

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            dis[i][j]=inf;
        }
    }

    dis[start.fi][start.se]=0;
    while(!qu.empty()){
        pii now=qu.front(); qu.pop();
        int h=now.fi, w=now.se;
        if(fld[h][w]==num){
            start=make_pair(h, w);
            return dis[h][w];
        }

        for(int k=0; k<4; k++){
            pii nx=make_pair(h+d[k].fi, w+d[k].se);
            if(!(0<=nx.fi&&nx.fi<H&&0<=nx.se&&nx.se<W)) continue;//is_field?
            if(fld[nx.fi][nx.se]=='X') continue;
            if(dis[nx.fi][nx.se]!=inf) continue;
            dis[nx.fi][nx.se]=dis[h][w]+1;
            qu.push(nx);
        }
    }

}

void solve(){

    int ans=0;
    for(char c='1'; c<=N; c++){
        ans+=bfs(c);
    }

    cout<< ans<< endl;
    return;
}
int main(){

    cin>> H>> W>> N;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin>> fld[i][j];
            if(fld[i][j]=='S'){
                start=make_pair(i, j);
            }
        }
    }

    solve();

    return 0;
}