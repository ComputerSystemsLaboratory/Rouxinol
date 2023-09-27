#include<stdio.h>
int main()
{
	int n,m,i,j,a[100],b[100],s,t,u,v;
	while(scanf("%d%d",&n,&m),n)
	{
		for(s=i=0;i<n;++i)scanf("%d",&a[i]),s+=a[i];
		for(t=i=0;i<m;++i)scanf("%d",&b[i]),t+=b[i];
		for(u=v=999,i=0;i<n;++i)for(j=0;j<m;++j)if(s-t+2*b[j]-2*a[i]==0&&u+v>a[i]+b[j])u=a[i],v=b[j];
		if(u-999)printf("%d %d\n",u,v);
		else puts("-1");
	}
	return 0;
}