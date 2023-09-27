#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int V;
const int maxv=17;
const int INF=2e9+7;
int cost[maxv][maxv];
int d[maxv];
bool used[maxv];
void bjs(int s)
{

    fill(d,d+V,INF);
    d[s]=0;
    memset(used,0,sizeof(used));
    while(true)
    {
        int v=-1;
        for(int i=0;i<V;i++)
        {
            if(!used[i]&&(v==-1||d[i]<d[v]))
               v=i;
        }
        if(v==-1) break;
        used[v]=1;
        for(int i=0;i<V;i++)
            d[i]=min(d[i],d[v]+cost[v][i]);
    }
    return ;
}
int main()
{
   int n;
   while(cin>>n&&n!=0)
   {
     V=0;
     for(int i=0;i<maxv;i++)
        fill(cost[i],cost[i]+maxv,INF);
     for(int i=0;i<n;i++)
     {
         int x,y,z;
         cin>>x>>y>>z;
         cost[x][y]=z;
         cost[y][x]=z;
         V=max(V,x);
         V=max(V,y);
     }
     V++;
     int ans[V];
     memset(ans,0,sizeof(ans));
     for(int i=0;i<V;i++)
     {
         bjs(i);
         for(int j=0;j<V;j++)
            ans[i]+=d[j];
     }
     int ans0=0;
     for(int i=0;i<V;i++)
     {
         if(ans[i]<ans[ans0])
            ans0=i;
     }
     cout<<ans0<<" "<<ans[ans0]<<endl;
   }

}

