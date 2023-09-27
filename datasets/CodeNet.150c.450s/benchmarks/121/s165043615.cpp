//<<???????¨????????????????>>?¬¬??????????¢?
//DFS
#include <iostream>
#include <stdio.h>
#define MAX_W 101
#define MAX_H 101
using namespace std;
int w,h;
int res;
int dx[4]={0,-1,1,0};
int dy[4]={-1,0,0,1};
char loc[MAX_H][MAX_W];

void DFS(int a,int b,char c)
{
    loc[a][b]='o';
    for(int i=0;i<4;i++)
    {
        int x=a+dx[i],y=b+dy[i];
        if(x<h&&y<w&&x>=0&&y>=0&&loc[x][y]==c) DFS(x,y,c);
    }
    return;
}

int main()
{
    int a1,b1;
    int a2,b2;
    while(true)
    {
        cin>>h>>w;
        if(w==0&&h==0) break;
        res=0;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin>>loc[i][j];
            }
        }
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(loc[i][j]!='o')
                {
                    DFS(i,j,loc[i][j]);
                    res++;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}