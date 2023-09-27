#include<stdio.h>
int main()
{
	int x,y,N,M,i,j,l,z[]={0,1,0,-1,0};
	char d;
	while(scanf("%d",&N),N)
	{
		int a[21][21]={0};
		for(i=0;i<N;++i)scanf("%d%d",&x,&y),a[y][x]=1;
		x=y=10;
		for(scanf("%d",&M),i=0;i<M;++i)
		{
			scanf(" %c%d",&d,&l);
			if(d=='E')d=0;
			if(d=='N')d=1;
			if(d=='S')d=3;
			if(d=='W')d=2;
			for(j=0;j<l;++j)if(a[y+=z[d]][x+=z[d+1]])a[y][x]=0,--N;
		}
		puts(N?"No":"Yes");
	}
	return 0;
}