#include<cstdio>
#include<cstring>

int n,p;
int d[100];
int main(void){
	while(1){
		scanf("%d %d",&n,&p);
		memset(d,0,sizeof(d));
		if(n+p==0)break;
		int i=0,mp=p;
		while(1){
			if(p==0){
				if(d[i]==mp)break;
				p+=d[i];
				d[i]=0;
			}else d[i]++,p--;
			i=(i+1)%n;
		}
		printf("%d\n",i);
	}
	return 0;
}