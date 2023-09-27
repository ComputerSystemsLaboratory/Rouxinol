#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>
using namespace std;
typedef pair<int,int>P;
const int maxn = 1005;
char Map[maxn][maxn];
int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
int dis[maxn][maxn];
P fac[10];
int n,h,w;
int bfs(P a,P b){
    for(int i=0;i<h;i++)for(int j=0;j<w;j++)dis[i][j]=-1;
    queue<P>que;
    que.push(a);
    dis[a.first][a.second]=0;
    while(que.size()){
        P p = que.front();que.pop();
        if(p==b)break;
        for(int i=0;i<4;i++){
            int nx=dx[i]+p.first;
            int ny=dy[i]+p.second;
            if(0<=nx&&nx<h&&0<=ny&&ny<w&&Map[nx][ny]!='X'&&dis[nx][ny]==-1){
                que.push(P(nx,ny));
                dis[nx][ny]=dis[p.first][p.second]+1;
            }
        }
    }
    return dis[b.first][b.second];
}
int main()
{
    cin>>h>>w>>n;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>Map[i][j];
            if(Map[i][j]=='S'){
                fac[0].first=i;
                fac[0].second=j;
                Map[i][j]='.';
            }
            else if('1'<=Map[i][j]&&Map[i][j]<='9'){
                int flag = Map[i][j] - '0';
                fac[flag].first=i;
                fac[flag].second=j;
            }
        }
    }
    int setp = 0;
    for(int i=0;i<n;i++){
        setp += bfs(fac[i],fac[i+1]);
    }
    cout<<setp<<endl;
    return 0;
}