#include<cstdio>
#include<iostream>
#include<cstring>
#include<queue>
#include<algorithm>
#include<utility>
using namespace std;
const int INF=100000000;
char a[1005][1005];
int b[1005][1005];
int h,w,n;
int  sx,sy,gx,gy;
int xx[4]={0,0,1,-1};
int yy[4]={-1,1,0,0};
typedef pair<int,int> P;
 int jj;
int bfs()
{

    queue <P> que;
    for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
            b[i][j]=INF;
        que.push(P(sx,sy));
        b[sx][sy]=0;

        while(que.size())
        {
        P p=que.front();
        que.pop();
        if((a[p.first][p.second]-'0')==jj)//我居然用 int型的JJ去剪'0'  ??我特?太智障了。。。！！
        {
            gx=p.first;             //数字?始  ?点?? 起点
            gy=p.second;
            sx=gx;
            sy=gy;
            a[gx][gy]='.';
            //return b[gx][gy];
            break;
        }
        for(int i=0;i<4;i++)
        {
            int nx=p.first+xx[i];
            int ny=p.second+yy[i];
            if(nx>=0&&nx<h&&ny>=0&&ny<w&&a[nx][ny]!='X'&&b[nx][ny]==INF)//?里  nx ny也没有 写上等于0的情况
            {
                que.push(P(nx,ny));
                //a[nx][ny]='#';
                b[nx][ny]=b[p.first][p.second]+1;
            }
        }

        }
return b[gx][gy];
}

int main()
{
    while(~scanf("%d%d%d",&h,&w,&n))
    {

        getchar();
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                scanf("%c",&a[i][j]);
                if(a[i][j]=='S')
                {
                    sx=i;
                    sy=j;
                    a[i][j]='.';
                }
            }
            getchar();
        }
       /*
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
            b[i][j]=INF;
         //*/
         int res=0;
            for( jj=1;jj<=n;jj++)
            {
                int num = bfs();
                res+=num;
            }

        //int res=bfs();
        printf("%d\n",res);
        /*
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                printf("%c",a[i][j]);
            }
            printf("\n");
        }
        */
    }
    return 0;
}