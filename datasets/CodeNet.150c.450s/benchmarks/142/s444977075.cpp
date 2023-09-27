#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<set>
#include<vector>
#include<queue>
#include<list>
#include<stack>
//#include<unordered_map>
using namespace std;
#define ll long long
#define dd cout<<endl
const long long int inf = 1e18+7;
const int mod = 998244353;

using namespace std;

inline ll int max(ll int a,ll int b) { return a>b?a:b; }
inline ll int min(ll int a,ll int b) { return a<b?a:b; }

const int maxn=2e5+10;

int num[maxn];

int main()
{
//	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	int n,k;
	
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		
		for(int i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		
		for(int i=0;i<n-k;i++)
		{
			if(num[i+k] > num[i])
			{
              	printf("Yes\n");
			}
			else
			{
                printf("No\n");
			}
		}
		
	}
	
	return 0;
}