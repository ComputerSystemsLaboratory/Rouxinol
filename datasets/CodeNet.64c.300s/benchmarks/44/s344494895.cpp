#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;
const int INF = 9999999;
const int max_e=15;
const int max_v=15;
int d[max_v][max_v];
int V,E;
int read()
{
    int n;
    scanf("%d",&n);
    if(n==0) return 0;
    V=0;
    for(int i=0;i<max_v;i++)
        for(int j=0;j<max_v;j++)
        {
            if(i==j) d[i][j]=0;
            else d[i][j]=INF;
        }
    while(n--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        a+=1,b+=1;
        V=max(V,max(a,b));
        d[a-1][b-1]=d[b-1][a-1]=c;
    }
    return 1;

}
void floyd_warshall()
{
    for(int k=0;k<V;k++)
        for(int i=0;i<V;i++)
            for(int j=0;j<V;j++)
            {
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
}

int main()
{
    while(read())
    {
        floyd_warshall();
        int cnt=INF,id;
        for(int i=0;i<V;i++)
        {
            int sum=0;
            for(int j=0;j<V;j++)
            {
                sum+=d[i][j];
            }
            if(cnt>sum)
            {
                cnt=sum,id=i;
            }
        }
        printf("%d %d\n",id,cnt);
    }
    return 0;
}