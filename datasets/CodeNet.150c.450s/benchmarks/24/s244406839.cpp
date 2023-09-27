#include<stdio.h>
#include<map>
#include<algorithm>
int main()
{
	int N,M,i,r;
	while(scanf("%d%d",&N,&M),N)
	{
		std::pair<int,int>a[10000];
		for(r=i=0;i<N;++i)scanf("%d%d",&a[i].second,&a[i].first);
		std::sort(a,a+N);
		for(i=N-1;i>=0;--i)
			if(M>=a[i].second)M-=a[i].second;
			else r+=(a[i].second-M)*a[i].first,M=0;
		printf("%d\n",r);
	}
	return 0;
}