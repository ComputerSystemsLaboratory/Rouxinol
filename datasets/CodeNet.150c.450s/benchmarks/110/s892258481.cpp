#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
#define INF 1000000
using namespace std;
struct data{
    int x,y;
};
int ans[1001][1001],H,W,N,cou;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
char field[1001][1001];
int main(){
    data s;
    cin>>H>>W>>N;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>field[i][j];
            if(field[i][j]=='S')s.x=i,s.y=j;
        }
    }
    for(int l=1;l<=N;l++){
        queue<data> q;
        data g;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                ans[i][j]=INF;
                if(field[i][j]=='0'+l)g.x=i,g.y=j;
            }
        }
        q.push(s);
        ans[s.x][s.y]=0;
        while(!q.empty()){
            data now;
            now=q.front();
            q.pop();
            if(now.x==g.x&&now.y==g.y)break;
            for(int i=0;i<4;i++){
                if(now.x+dx[i]>=0&&now.x+dx[i]<H&&now.y+dy[i]>=0&&now.y+dy[i]<W&&ans[now.x+dx[i]][now.y+dy[i]]==INF&&field[now.x+dx[i]][now.y+dy[i]]!='X'){
                    data next;
                    next.x=now.x+dx[i],next.y=now.y+dy[i];
                    q.push(next);
                    ans[now.x+dx[i]][now.y+dy[i]]=ans[now.x][now.y]+1;
                }
            }
        }
        cou+=ans[g.x][g.y];
        s=g;
    }
    cout<<cou<<endl;
return 0;
}