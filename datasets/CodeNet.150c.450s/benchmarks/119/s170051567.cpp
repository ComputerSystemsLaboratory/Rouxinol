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
char map[52][52];
void func(int y,int x)
{
    map[y][x]='0';
    int nx,ny;
    for(int dy=-1;dy<=1;dy++)
    {
        for(int dx=-1;dx<=1;dx++)
        {
            ny=y+dy;
            nx=x+dx;
            if(map[ny][nx]=='1'&&0<=ny&&0<=nx&&ny<h&&nx<w)
            {
                func(ny,nx);
            }
        }
    }
    return;
}
int main()
{
    while(cin>>w>>h,w)
    {
        cnt=0;
        for(int i=0;i<52;i++)
        {
            for(int j=0;j<52;j++)
            {
                map[i][j]='0';
            }
        }
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin>>map[i][j];
            }
        }
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(map[i][j]=='1')
                {
                    func(i,j);
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}