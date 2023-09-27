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

const int maxn=1e5+10;

int book[maxn];

int main()
{
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	for(int x=1;x<=100;x++)
	{
		for(int y=1;y<=100;y++)
		{
			int t1=x+y;
			for(int z=1;z<=100;z++)
			{
				int t2=y+z;
				int t3=x+z;
				
				int to= (t1*t1+t2*t2+t3*t3)>>1;
				
				book[to]++;
			}
		}
	}
	
	int n;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<book[i]<<endl;
		}
	}
	
	return 0;
}