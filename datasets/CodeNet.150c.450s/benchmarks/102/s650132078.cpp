#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
int cnt;
int w,h;
char map[24][24];
void func(int y,int x)
{
    cnt++;
    map[y][x]='#';
    int ny,nx;
    int dx[]={0,0,1,-1};
    int dy[]={1,-1,0,0};
    for(int i=0;i<4;i++)
    {
        ny=y+dy[i];
        nx=x+dx[i];
        if(map[ny][nx]=='.'&&0<=ny&&0<=nx&&ny<h&&nx<w)func(ny,nx);
    }
    return;
}
int main()
{
    while(cin>>w>>h,w)
    {
        cnt=0;
        int x,y;
        for(int i=0;i<24;i++)
        {
            for(int j=0;j<24;j++)
            {
                map[i][j]='#';
            }
        }
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin>>map[i][j];
                if(map[i][j]=='@')
                {
                    y=i;
                    x=j;
                }
            }
        }
        func(y,x);
        cout<<cnt<<endl;
    }
    return 0;
}