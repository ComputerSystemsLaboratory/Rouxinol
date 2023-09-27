#include <stdio.h>

int main(void){
	int a,b,n,m,k,p[11];
	while(scanf("%d %d",&n,&m),n||m){
		k=0;
		for(int i=0;i<11;i++)p[i]=0;
		while(n--){
			scanf("%d %d",&a,&b);
			p[b]+=a;
		}
		for(int i=10;i>=0;i--){
			if(m>=p[i]){
				m-=p[i];
				p[i]=0;
			}else{
				p[i]-=m;
				m=0;
				break;
			}
		}
		for(int i=1;i<11;i++)k+=p[i]*i;
		printf("%d\n",k);
	}
	return 0;
}