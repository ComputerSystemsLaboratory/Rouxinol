#include<cstdio>
#include<iostream>
#include<queue>
#include<map>
#include<cstring>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
int n,m,mmp[11][10003],ans=0;
void dfs(int step)
{
    if(step==n){
        int temp=0,sum=0;
        for(int j=0;j<m;j++){
            temp=0;
            for(int i=0;i<n;i++)
                if(mmp[i][j])
                    temp++;
            sum+=temp>n-temp?temp:n-temp;
        }
        ans=max(ans,sum);
        return ;
    }
    dfs(step+1);
    for(int i=0;i<m;i++)
        mmp[step][i]=!mmp[step][i];
    dfs(step+1);
}
int main()
{
    while(scanf("%d %d",&n,&m)!=EOF){
        if(!n&&!m) break;
        ans=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                scanf("%d",&mmp[i][j]);
        dfs(0);
        printf("%d\n",ans);
    }
    return 0;
}