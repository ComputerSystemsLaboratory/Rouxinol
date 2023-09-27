#include <stdio.h>

int main(void){
	int high[10]={0}, ans[3]={0,-1,-2};
	int i,l;
	
	for(i=0; i<10; i++)
		scanf("%d",&high[i]);
	
	ans[0]=high[0];
	if(ans[0]<high[1]){
	ans[1]=ans[0];
	ans[0]=high[1];
	}else{
	ans[1]=high[1];
	}
	for(i=2; i<10; i++){
		if(ans[2]<high[i]){
			if(ans[1]<high[i]){
				if(ans[0]<high[i]){
				ans[2]=ans[1];
				ans[1]=ans[0];
				ans[0]=high[i];
				continue;
				}
				ans[2]=ans[1];
				ans[1]=high[i];
				continue;
			}
				ans[2]=high[i];
		}
	}
	for(i=0; i<3; i++)
		printf("%d\n",ans[i]);

	return 0;
}