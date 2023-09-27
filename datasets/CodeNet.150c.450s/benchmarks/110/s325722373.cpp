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
long long int cou;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
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
    for(int l=1;l<=N;l++){
        data g;
        g.x=1,g.y=1;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                ans[i][j]=INF;
                if(field[i][j]==l+'0'){
                    g.x=i,g.y=j;
                    //cout<<l+'0'<<endl;
                }
            }
        }
        ans[s.x][s.y]=0;
        queue <data> q;
        q.push(s);
        while(!q.empty()){
            data now;
            now=q.front();
            q.pop();
            if(now.x==g.x&&now.y==g.y)break;
            int nex,ney;
            for(int i=0;i<4;i++){
                nex=now.x+dx[i];
                ney=now.y+dy[i];
                if(nex>=0&&nex<H&&ney>=0&&ney<W&&ans[nex][ney]==INF&&field[nex][ney]!='X'){
                    data nowne;
                    nowne.x=nex,nowne.y=ney;
                    q.push(nowne);
                    ans[nex][ney]=ans[now.x][now.y]+1;
                }
            }
        }
        cou+=ans[g.x][g.y];
        s=g;
    }
    cout<<cou<<endl;
return 0;
}