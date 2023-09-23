#include<stdio.h>
int main(void)
{
	int a[30],s,d,f,g[30],i;
	for(i=1;i<=30;i++){
		g[i]=1;
	}
	for(i=1;i<=28;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=28;i++){
		for(f=1;f<=30;f++){
			if(a[i]==f){
				g[f]=0;
			}
		}
	}
	for(i=1;i<=30;i++){
		if(g[i]==1){
			printf("%d\n",i);
		}
	}
	return 0;
}