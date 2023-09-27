#include<iostream>
#include<algorithm>
using namespace std;
int mapp[12][10005],n,m,ans;

void fan(int x)
{
    for(int i=0;i<m;++i)
        mapp[x][i]^=1;
}

int zong()
{
    int sum=0;
    for(int j=0;j<m;++j)
    {
        int nowsum=0;
        for(int i=0;i<n;++i)
        {
            if(mapp[i][j]==0)
                nowsum++;
        }
        sum+=max(nowsum,n-nowsum);
    }
    return sum;
}

void dfs(int r)
{
    if(r==n)
    {
        ans=max(ans,zong());
        return ;
    }
    fan(r);
    dfs(r+1);
    fan(r);
    dfs(r+1);

}

int main()
{
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        ans=-1;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                cin>>mapp[i][j];
            }
        }
        dfs(0);
        cout<<ans<<endl;
    }
}
