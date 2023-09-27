#include<stdio.h>
#include<algorithm>
#define D(c,n) (*std::max_element(c,c+n)-*std::min_element(c,c+n)+1)
int main()
{
	int N,n,x[201],y[201],i,d,z[]={-1,0,1,0,-1};
	x[0]=y[0]=0;
	while(scanf("%d",&N),N)
	{
		for(i=1;i<N;++i)scanf("%d%d",&n,&d),x[i]=x[n]+z[d],y[i]=y[n]+z[d+1];
		printf("%d %d\n",D(x,N),D(y,N));
	}
	return 0;
}