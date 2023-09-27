#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
#define INF 10000000
using namespace std;
struct data{
    int x,y;
};
int H,W,N;
int ans[1001][1001];
char field[1001][1001];
int cou,sx,sy;
void bfs(data start,int num){
    int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
    data g;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            ans[i][j]=INF;
            if(field[i][j]==num+'0'){
                g.x=i,g.y=j;
            }
        }
    }
    ans[start.x][start.y]=0;
    queue<data> q;
    q.push(start);
    while(!q.empty()){
        data now=q.front();
        q.pop();
        if(now.x==g.x&&now.y==g.y)break;
        int nex,ney;
        for(int i=0;i<4;i++){
            nex=now.x+dx[i];
            ney=now.y+dy[i];
            if(nex>=0&&nex<H&&ney>=0&&ney<W&&field[nex][ney]!='X'&&ans[nex][ney]==INF){
                data nowne;
                nowne.x=nex,nowne.y=ney;
                q.push(nowne);
                ans[nex][ney]=ans[now.x][now.y]+1;
            }
        }
    }
    cou+=ans[g.x][g.y];
    if(num!=N)bfs(g,num+1);
}
int main(){
    data s;
    cin>>H>>W>>N;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>field[i][j];
            if(field[i][j]=='S'){
                s.x=i,s.y=j;
            }
        }
    }
    bfs(s,1);
    cout<<cou<<endl;
return 0;
}