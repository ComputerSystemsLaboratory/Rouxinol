#include<bits/stdc++.h>
#define int long long int

using namespace std;

const int INF = 100000000;

typedef pair<int ,int> P;
char masu[1003][1003];
int W,H,K,ans=0;
int sx[10],sy[10];
int gx[10],gy[10];

int d[1003][1003];

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

queue<P> que;

void sho(){
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            d[j][i]=INF;
        }
    }
    while(que.size()){
        que.pop();
    }
}

int bfs(){
    for(int i=0;i<K;i++){
        sho();
        que.push(P(sx[i],sy[i]));
        d[sx[i]][sy[i]]=0;
        while(que.size()){
            P p=que.front();que.pop();
            if(p.first==gx[i+1]&&p.second==gy[i+1])break;
            for(int j=0;j<4;j++){
                int nx = p.first+dx[j],ny = p.second+dy[j];
                if(0<=nx&nx<W&&0<=ny&&ny<H&&masu[nx][ny]!='X'&&d[nx][ny]==INF){
                    que.push(P(nx,ny));
                    d[nx][ny] = d[p.first][p.second] + 1;
                }
            }
        }ans+=d[gx[i+1]][gy[i+1]];
    }
    return ans;
}

signed main(){
    cin >> H >> W >> K;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> masu[j][i];
            int a=masu[j][i]-'0';
            if(isdigit(masu[j][i])){
                gx[a]=j,gy[a]=i,sx[a]=j,sy[a]=i;
            }else if(masu[j][i]=='S'){
                sx[0]=j,sy[0]=i;
            }
        }
    }
    int answer = bfs();
    cout << answer << endl;
return 0;
}