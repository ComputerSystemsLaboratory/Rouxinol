#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
#include<cstring>
#include<cmath>
#include<bitset>
#include<set>
#include<map>
#include<sstream>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD=1000000007;
int n;
int num[11];
int rr,lll;
bool b;
void dfs()
{
	bitset<10> ans;
	int alll=1<<10;
	while(alll-->0)
	{
		ans=static_cast<bitset<10> >(alll);
		bool b=true;
		rr=0;
		lll=0;
		rep(i,10)
		{
			if(ans[i])
			{
				if(num[i]>lll)
				{
					lll=num[i];
				}
				else
				{
					b=false;
					break;
				}
			}
			else
			{
				if(num[i]>rr)
				{
					rr=num[i];
				}
				else
				{
					b=false;
					break;
				}
			}
		}
		if(b)break; 
	}
	if(alll>=0)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return;
}
int main()
{
	cin>>n;
	while(n--)
	{
		rep(i,10)cin>>num[i];
		dfs();
	}
	return 0;
}