#include<stdio.h>
int m[52][52];
void F(int x,int y)
{
	if(m[y][x])
	{
		m[y][x]=0;
		int i,j;
		for(i=-1;i<2;++i)for(j=-1;j<2;++j)F(x+i,y+j);
	}
}
int main()
{
	int h,w,i,j,r;
	while(scanf("%d%d",&w,&h),w)
	{
		for(i=1;i<=h;++i)for(j=1;j<=w;++j)scanf("%d",&m[i][j]);
		for(i=0;i<h+2;++i)m[i][w+1]=0;
		for(r=j=0;j<w+2;++j)m[h+1][j]=0;
		for(i=1;i<=h;++i)for(j=1;j<=w;++j)if(m[i][j])F(j,i),++r;
		printf("%d\n",r);
	}
	return 0;
}