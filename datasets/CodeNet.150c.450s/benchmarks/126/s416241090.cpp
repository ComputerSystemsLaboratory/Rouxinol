#include<stdio.h>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int a,b,n,x,y,m[17][17],p[17][17],i,k;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==0 && b==0) break;
		scanf("%d",&n);
		for(i=1;i<=b;i++){
			for(k=1;k<=a;k++){
				m[i][k]=0; p[i][k]=0;
			}
		}
		for(i=0;i<n;i++){
			scanf("%d %d",&x,&y);
			m[y][x]=1;
		}
		p[1][1]=1;
		for(i=1;i<=b;i++){
			for(k=1;k<=a;k++){
				if(k+1<=a && m[i][k+1]!=1) p[i][k+1]+=p[i][k];
				if(i+1<=b && m[i+1][k]!=1) p[i+1][k]+=p[i][k];
			}
		}
		printf("%d\n",p[b][a]);
	}
	return 0;
}