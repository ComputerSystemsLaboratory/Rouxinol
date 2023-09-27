#include<bits/stdc++.h>

using namespace std;

int main()
{
	set<int> s;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		s.insert(t);
	}
	scanf("%d",&n);
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		ans+=s.count(t);
	}
	printf("%d\n",ans);
	return 0;
}