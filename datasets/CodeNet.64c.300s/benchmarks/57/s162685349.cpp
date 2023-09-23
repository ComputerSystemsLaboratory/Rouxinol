#include<stdio.h>
#include<bitset>
int main()
{
	std::bitset<10000>o[10];
	int R,C,i,j,k,x,r,s;
	while(scanf("%d%d",&R,&C),R)
	{
		for(i=0;i<R;++i)for(j=0;j<C;++j)scanf("%d",&x),o[i][j]=x;
		for(i=r=0;i<1024;++i)
		{
			for(j=0;j<R;++j)(i&(1<<j)?o[j].flip():o[j]);
			for(s=j=0;j<C;++j)
			{
				for(x=k=0;k<R;++k)x+=o[k][j];
				s+=(x>R-x?x:R-x);
			}
			r=(r>s?r:s);
			for(j=0;j<R;++j)(i&(1<<j)?o[j].flip():o[j]);
		}
		printf("%d\n",r);
	}
	return 0;
}