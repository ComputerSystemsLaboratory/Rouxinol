#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxn=100005;
int n,m,map[10][maxn],ans;
void fun(int x)//翻?第x行
{
    for(int i=0;i<m;++i)
    {
        map[x][i]=!map[x][i];
    }
}
int num()//?算当前状?最多有多少个 1
{
    int cnt=0;
    for(int i=0;i<m;++i)
    {
        int tp=0;
        for(int j=0;j<n;++j)//?着??
        {
            if(map[j][i]==1)
            {
                ++tp;
            }
        }
        cnt+=max(tp,n-tp);
    }
    return cnt;
}
void dfs(int cnt,int r)//暴力遍?
{
    if(cnt==n)
    {
        ans=max(num(),ans);
        return;
    }
    dfs(cnt+1,r+1);
    fun(r);//翻?
    dfs(cnt+1,r+1);
    fun(r);//回溯
}
int main()
{
	//freopen("shuju.txt","r",stdin); 
	while(scanf("%d%d",&n,&m),n|m)
	{
		for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                scanf("%d",&map[i][j]);
            }
        }
        ans=0;
        dfs(0,0);
        printf("%d\n",ans);
	}
	return 0;
}