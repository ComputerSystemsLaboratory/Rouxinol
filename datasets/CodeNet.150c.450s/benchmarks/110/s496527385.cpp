//??????????¨????????????????????¬¬??????????¢?
//BFS
#include <iostream>
#include <queue>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define MAX_H 1001
#define MAX_W 1001
#define MAX_N 10

using namespace std;

typedef pair<int,int> P;
int H,W,N;
int sx,sy;
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
char Loc[MAX_H][MAX_W];
int FoodX[MAX_N];
int FoodY[MAX_N];

int BFS(int sa,int sb,int ea,int eb)
{
    int D[H][W];
    for(int i=0;i<H;i++)
        for(int j=0;j<W;j++) D[i][j]=INT_MAX;
    queue<P> que;
    que.push(P(sa,sb));
    D[sa][sb]=0;
    while(que.size())
    {
        P p=que.front();
        for(int i=0;i<4;i++)
        {
            int nx=p.first+dx[i],ny=p.second+dy[i];
            if(nx>=0&&nx<H&&ny>=0&&ny<W&&Loc[nx][ny]!='X'&&D[nx][ny]==INT_MAX)
            {
                que.push(P(nx,ny));
                D[nx][ny]=D[p.first][p.second]+1;
            }
            if(nx==ea&&ny==eb) return D[nx][ny];
        }
        que.pop();
    }
}

int main()
{
    cin>>H>>W>>N;
    int k=0,step=0;
    for(int i=0;i<H;i++)
    {
        getchar();
        for(int j=0;j<W;j++)
        {
            scanf("%c",&Loc[i][j]);
            if(Loc[i][j]=='S') {sx=i;sy=j;}
            if(Loc[i][j]>='1'&&Loc[i][j]<='9') {FoodX[Loc[i][j]-'0']=i;FoodY[Loc[i][j]-'0']=j;}
        }
    }
    FoodX[0]=sx;
    FoodY[0]=sy;
    for(int i=0;i<N;i++)
    {
        step+=BFS(FoodX[i],FoodY[i],FoodX[i+1],FoodY[i+1]);
    }
    cout<<step<<endl;
    return 0;
}