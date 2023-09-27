#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;
int a[105][105];
int tim=0;
int first[105],last[105];
int zhuangtai[105];
int us;
int nex[105];
int findnext(int k)
{
    for(int i=nex[k];i<us;i++)
    {
        nex[k]=i+1;
        if(a[k][i]) return i;
    }
    return -1;
}
void visit(int k)
{
    for(int i=0;i<us;i++)
    {
        nex[i]=0;
    }
    stack<int > s;
    s.push(k);
    first[k]=++tim;
    zhuangtai[k]=1;
    while(!s.empty())
    {
        int n=s.top();
        int ne=findnext(n);
        if(ne!=-1)
        {
            if(zhuangtai[ne]==0){
                zhuangtai[ne]=1;
                first[ne]=++tim;
                s.push(ne);
            }
        }else{
            s.pop();
            zhuangtai[n]=2;
            last[n]=++tim;
        }
    }
}
void dfs()
{
    for(int i=0;i<us;i++)
    {
        zhuangtai[i]=0;
        nex[i]=0;
    }
    for(int i=0;i<us;i++)
    {
        if(zhuangtai[i]==0) visit(i);
    }
    for(int i=0;i<us;i++)
    {
        printf("%d %d %d\n",i+1,first[i],last[i]);
    }
}
int main()
{
    scanf("%d",&us);
    for(int i=0;i<us;i++)
    {
        int p,x;
        scanf("%d%d",&p,&x);
        p--;
        for(int j=0;j<x;j++)
        {
            int y;
            scanf("%d",&y);
            y--;
            a[p][y]=1;
        }
    }
    dfs();
    return 0;
}