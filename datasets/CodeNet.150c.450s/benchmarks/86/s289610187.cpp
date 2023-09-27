#include<cstdio>

int n,m,p;
int x[101];

int main(void){
	while(1){
		scanf("%d %d %d",&n,&m,&p);
		if(n+m+p==0)break;
		int all=0;
		for(int i=0;i<n;i++){
			scanf("%d",&x[i]);
			all+=x[i];
		}
		all*=(100-p);
		printf("%d\n",x[m-1]>0?all/x[m-1]:0);
	}
	return 0;
}