#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<string>
#include<stack>
#include<queue>
#define Vmaxn 100010
#define Emaxn 500010
#define inf 2147483646

using namespace std;

struct Node
{
    int x,y,val,pre;
};
//邻接表存储方法
int g_[Vmaxn];
Node g[Emaxn];

int n,m,r;
int dis[Vmaxn],cnt[Vmaxn];
bool h[Vmaxn];//判断是否在队列中
queue<int> q;

int main()
{
    int i,j,k,t,ans;
    int p,p_;
    bool negative;

    cin>>n>>m>>r;
    memset(g_,-1,sizeof g_);
    for(i=0;i<m;i++)
    {
        cin>>g[i].x>>g[i].y>>g[i].val;
        g[i].pre=g_[g[i].x];
        g_[g[i].x]=i;
    }
    if(n==1){
        cout<<0<<endl;
        exit(0);
    }

    for(i=0;i<n;i++)
        dis[i]=inf,h[i]=true;
    memset(cnt,0,sizeof cnt);
    dis[r]=0,h[r]=false;
    q.push(r);

    negative=false;
    while(!q.empty())
    {
        p=q.front();q.pop();h[p]=true;
        cnt[p]++;
        if(cnt[p]>=n){
            negative=true;
            break;
        }
        j=g_[p];
        while(j!=-1)
        {
            p_=g[j].y;
            if(dis[p]+g[j].val<dis[p_])//当前一个节点被更新了，它以后还有可能更新别的节点，所以入队
            {
                dis[p_]=dis[p]+g[j].val;
                if(h[p_])
                {
                    q.push(p_);
                    h[p_]=false;
                }
            }
            j=g[j].pre;
        }
    }
    if(negative==true)
        cout<<"NEGATIVE CYCLE"<<endl;
    else{
        for(i=0;i<n;i++)
            if(dis[i]==inf)
                printf("INF\n");
            else
                printf("%d\n",dis[i]);
    }
    return 0;
}

