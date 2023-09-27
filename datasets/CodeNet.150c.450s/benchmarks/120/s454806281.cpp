#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<vector>
#include<stack>
#include<utility>
#include<sstream>
using namespace std;
typedef long long ll;
const int inf = 0x3f3f3f3f;
const int maxn = 1005;
int a[20][10005],b[20][10005];
int num[10005],ans;
int r,c;
void cr(int i)
{
    for(int j = 1;j <= c;j++)b[i][j] = !b[i][j];
}
void cc(int j)
{
    for(int i = 1;i <= r;i++)b[i][j] = !b[i][j];
}
void init()
{
    for(int i = 1;i <= r;i++)
        for(int j = 1;j <= c;j++)
        b[i][j] = a[i][j];
}
void work()
{
    int temp = 0;
    for(int j = 1;j <= c;j++)
    {
        num[j] = 0;
        for(int i = 1;i <= r;i++)
            if(b[i][j])num[j]++;
        temp = temp + max(num[j],r - num[j]);
    }
    ans = max(ans,temp);
}
void dfs(int n)
{
    if(n == r + 1)
    {
        work();
        return;
    }
    dfs(n + 1);
    cr(n);
    dfs(n + 1);
    cr(n);
}
int main()
{
	#ifdef LOCAL
	freopen("C:\\Users\\巍巍\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\巍巍\\Desktop\\out.txt","w",stdout);
	#endif // LOCAL
	while(scanf("%d%d",&r,&c) != EOF)
    {
        if(!r&&!c)break;
        for(int i = 1;i <= r;i++)
        {
            for(int j = 1;j <= c;j++)
                scanf("%d",&a[i][j]);
        }
        ans = 0;
        init();
        dfs(1);
        printf("%d\n",ans);
    }
	return 0;
}