#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>

#define max 1005

struct node{
    int x;
    int y;
    int cnt;
    char c;
};

int arr[max][max];
int arr_bk[max][max];
int xd[]={-1,0,1,0};
int yd[]={0,-1,0,1};
int dot,cheese,cnt;
int h,w;
int energy;

using namespace std;

void bfs(int *i,int *k)
{
    queue <node> qu;
    node tp,tp2;
    tp.x=*k;tp.y=*i;tp.c='S',tp.cnt=0;
    int n,m;
    qu.push(tp);
    for(n=0;n<h;++n)
        for(m=0;m<w;++m)
            arr_bk[n][m]=arr[n][m];
    while(!qu.empty())
    {
        tp=qu.front();
        qu.pop();
        for(n=0;n<4;n++)
        {
            tp2.x=tp.x+xd[n];
            tp2.y=tp.y+yd[n];
            tp2.c=tp.c;
            tp2.cnt=tp.cnt;
            if(tp2.x<0||tp2.x>=w||tp2.y<0||tp2.y>=h||arr_bk[tp2.y][tp2.x]=='X')
                continue;
            if(arr_bk[tp2.y][tp2.x]=='.'||arr_bk[tp2.y][tp2.x]=='S')
            {
                tp2.cnt++;
                arr_bk[tp2.y][tp2.x]='X';
                qu.push(tp2);
            }
            if(arr_bk[tp2.y][tp2.x]-48>=0&&arr_bk[tp2.y][tp2.x]-48<=9)
            {
                if(arr_bk[tp2.y][tp2.x]-48<=energy)
                {
                    energy++;
                    cheese--;
                    arr[tp2.y][tp2.x]='.';
                    tp.cnt++;
                    *k=tp2.x;*i=tp2.y;cnt+=tp.cnt;
                    return;
                }
                else
                {
                    tp2.cnt++;
                    qu.push(tp2);
                }
            }
        }
    }
}

int main()
{
    int i,k,n,x,y;
    while(scanf("%d %d %d",&h,&w,&n)==3)
    {
        cheese=0;
        for(i=0;i<h;i++)
        {
            for(k=0;k<w;k++)
            {
                scanf(" %c",&arr[i][k]);
                if(arr[i][k]=='S')
                {
                    x=k;y=i;
                }
                if(arr[i][k]>='1'&&arr[i][k]<='9')
                    cheese++;
            }
        }
        energy=1;cnt=0;
        while(cheese)
        {
            bfs(&y,&x);
        }
        printf("%d\n",cnt);
    }
    return 0;
}