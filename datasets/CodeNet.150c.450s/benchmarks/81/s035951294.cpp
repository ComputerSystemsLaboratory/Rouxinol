#include<cstdio>
#include<algorithm>
#include<climits>
#include<numeric>
using namespace std;
int main()
{
	int c[10][10],n,m,i,j,k,x,y,z;
	while(scanf("%d",&m),m)
	{
		for(i=0;i<10;++i)
			for(j=0;j<10;++j)
				c[i][j]=INT_MAX/2,c[i][i]=0;
		for(n=i=0;i<m;++i)
			scanf("%d%d%d",&x,&y,&z), c[x][y]=c[y][x]=z, n=max(n,max(x,y)+1);
		for(k=0;k<n;++k)
			for(i=0;i<n;++i)
				for(j=0;j<n;++j)
					c[i][j]=min(c[i][j],c[i][k]+c[k][j]);
		x=INT_MAX,y=INT_MAX;
		for(i=0;i<n;++i)
			if(z=accumulate(c[i],c[i]+n,0),x>z)
				x=z,y=i;
		printf("%d %d\n",y,x);
	}
	return 0;
}