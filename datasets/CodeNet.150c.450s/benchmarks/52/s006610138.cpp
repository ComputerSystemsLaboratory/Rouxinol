#include <stdio.h>

int main(void){
	int t,s=0;
	
	while(scanf("%d",&t),t){
		int i,now=0,count=0;
		int train[12]={0},car[12]={0};
		
		
		for(;;){
			if(s!=0){
				scanf("%d",&t);
			}
			else {
				s=1;
			}
			if(t!=0){
				train[now]=t;
				now++;
			}
			else{
				now--;
				car[count]=train[now];
				train[now]=0;
				count++;
				if(now==0)break;
			}
		}
		
		i=0;
		while(car[i]!=0){
			printf("%d\n",car[i]);
			i++;
		}
		s=0;
	}
	return 0;
}