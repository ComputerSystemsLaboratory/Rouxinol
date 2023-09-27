#include <stdio.h>
int main(){
	for(;;){
		int max=0,set[100000],n,m,a,b,c;
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)
		break;
		for(a=0;a<n;a++){
			scanf("%d",&set[a]);
		}
		for(a=0;a<n-m;a++){
			c=0;
			for(b=0;b<m;b++){
				c+=set[a+b];
			}
			if(max<c)
			max=c;
		}
		printf("%d\n",max);
	}
	return 0;
}