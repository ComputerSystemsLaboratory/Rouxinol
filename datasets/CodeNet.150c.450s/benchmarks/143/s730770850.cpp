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

const int maxn=1e5+100; 

int bk[maxn];

int main()
{
//	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	int n,q;
	
	scanf("%d",&n);
	
	ll int sum=0;
	
	for(int i=0,x;i<n;i++)
	{
		scanf("%d",&x);
		
		bk[x]++;
		
		sum+=x;
	} 
	
	scanf("%d",&q);
	
	for(int i=0,x,y;i<q;i++)
	{
		scanf("%d%d",&x,&y);
		
		bk[y]+=bk[x];
		
		sum+=(y-x)*bk[x];
		
		bk[x]=0;
		
		printf("%lld\n",sum);
			
	}
	
	return 0;
}