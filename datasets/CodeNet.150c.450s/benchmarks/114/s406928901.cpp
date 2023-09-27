#include<stdio.h>
#define INFTY (1<<21)
int main(){
	int n,c[100]={},m[100][100],d[100],p[100],i,j,u,a,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a);
			m[i][j]=a==-1?INFTY:a;
		}
	}
	for(i=0;i<n;i++){
		d[i]=INFTY;
		p[i]=0;
	}
	p[0]=-1;
	d[0]=0;
	c[0]=1;
	while(1){
		int minv=INFTY;
		u=-1;
		for(i=0;i<n;i++){
			if(minv>d[i]&&c[i]!=2){
				minv=d[i];
				u=i;
			}
		}
		if(u==-1)break;
		c[u]=2;
		for(i=0;i<n;i++){
			if(c[i]!=2&&m[u][i]!=INFTY){
				if(d[i]>m[u][i]){
					d[i]=m[u][i];
					p[i]=u;
					c[i]=1;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		if(p[i]!=-1){
			sum+=m[i][p[i]];
		}
	}
	printf("%d\n",sum);
	return 0;
}