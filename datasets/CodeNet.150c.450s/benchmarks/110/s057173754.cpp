#include <cstdio>
#include <iostream>
#include <queue>
#include <map>
#include <string>

using namespace std;

typedef struct P{
    int x;
    int y;
}P;


int h,w,n;

const int INF = 100000000;

char feld[1010][1010];
P ch[15];
int d[1010][1010];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int sx,sy;
int gx,gy;
int ans=0;

int bfs(){
    for(int i=0;i<n;i++){
        P s_xy=ch[i];
        sx=ch[i].x;
        sy=ch[i].y;
        gx=ch[i+1].x;
        gy=ch[i+1].y;
        for(int y=0;y<h;y++)
            for(int x=0;x<w;x++)
                d[y][x]=INF;
            queue<P> que;
            que.push(s_xy);
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
                for(int i=0;i<4;i++){
                    int nx=x+dx[i];
                    int ny=y+dy[i];
                    if(nx<0||nx>=w||ny<0||ny>=h)continue;
                    if(feld[ny][nx]!='X'&&d[ny][nx]==INF){
                        P n;
                        n.x=nx;
                        n.y=ny;
                        d[ny][nx]=d[y][x]+1;
                        que.push(n);
                    }
                }
            }
        }
        return 0;
}

int main(){
    cin>>h>>w>>n;
    char c;
    for(int y=0;y<h;y++){
        for(int x=0;x<w;x++){
            scanf(" %c",&feld[y][x]);
            c=feld[y][x];
            if(feld[y][x]=='S'){
                ch[0].x=x;
                ch[0].y=y;

            }
            if(c>='1'&&c<='9'){
                ch[c-'0'].x=x;
                ch[c-'0'].y=y;

            }
        }
    }
    bfs();
    cout<<ans<<endl;
    return 0;
}