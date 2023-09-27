#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<cstdio>
#include<cmath>
#include<map>
#include<set>
using namespace std;
int n,q;
pair <string,long long> que[110005];
pair <long long,string> ans[100005];
const long long mod=100005;
int main()
{
	scanf("%d%d",&n,&q);
    for(int i=0;i<n;i++)
    {
    	cin>>que[i].first;
    	scanf("%d",&que[i].second);
	}
	int f=0,cnt=n,sum=0;
	while(cnt)
	{
		int a=que[f].second;
		string b=que[f].first;
		if(a>q)
		{
			sum+=q;
			a-=q;
			que[(f+cnt)%mod].second=a;
			que[(f+cnt)%mod].first=b;
			f++;
			f%=mod;
		}
		else
		{
			sum+=a;
		    ans[n-cnt].first=sum;
		    ans[n-cnt].second=b;
		    cnt--;
			f++;
			f%=mod;
		}
	}
	for(int i=0;i<n;i++)
	    cout<<ans[i].second<<' '<<ans[i].first<<endl;
	return 0;
}
