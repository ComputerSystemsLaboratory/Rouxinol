#include<iostream>
#include<cstdio>
#include<queue>
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)

using namespace std;


struct P{
    int x;
    int y;
};

int w,h,n;
const int INF = 1e+8;
char feld[1010][1010];
int d[1010][1010];
int sx,sy,gx,gy;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int ans;
P che[15];


void bfs(){
    REP(i,n){
        P sp=che[i];
        sx=che[i].x;
        sy=che[i].y;
        gx=che[i+1].x;
        gy=che[i+1].y;
        REP(y,h)REP(x,w)d[y][x]=INF;
        queue<P> que;
        que.push(sp);
        d[sy][sx]=0;
        while(!que.empty()){
            P p=que.front();
            que.pop();
            int x=p.x;
            int y=p.y;
            if(x==gx&&y==gy){
                ans+=d[gy][gx];
                break;
            }
            REP(i,4){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx<0||nx>=w||ny<0||ny>=h)continue;
                if(feld[ny][nx]!='X'&&d[ny][nx]==INF){
                    P next;
                    next.x=nx;
                    next.y=ny;
                    que.push(next);
                    d[ny][nx]=d[y][x]+1;
                }
            }
        }
    }
}

int main(){
    cin>>h>>w>>n;
    REP(y,h){
        REP(x,w){
            scanf(" %c",&feld[y][x]);
            if(feld[y][x]=='S'){
                che[0].x=x;
                che[0].y=y;
            }else if(feld[y][x]>='1'&&feld[y][x]<='9'){
                char c=feld[y][x];
                che[c-'0'].x=x;
                che[c-'0'].y=y;
            }
        }
    }
    bfs();
    cout<<ans<<endl;
    return 0;
}