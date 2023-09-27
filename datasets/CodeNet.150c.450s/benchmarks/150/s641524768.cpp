#include<bits/stdc++.h>

int main()
{
	int n;
	scanf("%d",&n);
	static int A[10010],ma=0;
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		ma=std::max(ma,t);
		A[t]++;
	}
	int tot=0;
	for(int i=0;i<=10000;i++,tot+=A[i])
		for(int j=0;j<A[i];j++)
			printf("%d%c",i,(j+1==A[i]&&i==ma)?'\n':' ');
	return 0;
}