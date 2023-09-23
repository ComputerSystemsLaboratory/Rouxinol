#include<bits/stdc++.h>

bool prime(int x)
{
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return false;
	return true;
}

int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		if(prime(t)) ans++;
	}
	printf("%d\n",ans);
	return 0;
}