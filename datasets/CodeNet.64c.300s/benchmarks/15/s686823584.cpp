#include<bits/stdc++.h>

const int MAXN=110;

int main()
{
	int n,A[MAXN],cnt=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]); 
	for(int i=0;i<n;i++)
	{
		int mi=i;
		for(int j=i+1;j<n;j++)
			if(A[j]<A[mi]) mi=j;
		if(mi!=i)
		{
			std::swap(A[mi],A[i]);
			cnt++;
		}
	}
	for(int i=0;i<n;i++)
		printf("%d%c",A[i],i+1==n?'\n':' ');
	printf("%d\n",cnt);
	return 0;
}