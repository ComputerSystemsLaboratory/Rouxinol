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
int dp[1000005];
bool leap[1000005];
int main()
{
	#ifdef LOCAL
	freopen("C:\\Users\\巍巍\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\巍巍\\Desktop\\out.txt","w",stdout);
	#endif // LOCAL
	memset(leap,false,sizeof(leap));
	memset(dp,0,sizeof(dp));
    for(ll i = 2;i <= 999999;i++)
    {
        if(leap[i])continue;
        dp[i] = 1;
        for(ll j = i*i;j <= 999999;j = j + i)
            leap[j] = true;
    }
    for(int i = 1;i <= 999999;i++)dp[i] = dp[i] + dp[i - 1];
    int n;
    while(scanf("%d",&n) != EOF)
    {
        printf("%d\n",dp[n]);
    }
	return 0;
}