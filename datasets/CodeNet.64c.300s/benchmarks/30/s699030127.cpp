#include<stdio.h>
int main(void){
	int oturi;
	int mon,i,ans=0;
	int a[5]={500,100,50,10,5};
	while(1){
		ans=0;
		scanf("%d",&mon);
		if(mon==0)break;
		oturi=1000-mon;
		for(i=0;i<5;i++){
			ans+=oturi/a[i];
			oturi%=a[i];
		}
		ans+=oturi;
		printf("%d\n",ans);
	}
}
