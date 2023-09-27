#include <stdio.h>

int main(void){
	int a[4],b[4];
	int i,l;
	int ans[2]={0};	//hit blou
	while(scanf("%d",a)!=EOF){
		for(i=1;i<4;i++)
			scanf("%d",&a[i]);
			
		for(i=0;i<4;i++){
			scanf("%d",&b[i]);
			for(l=0; l<4; l++){
				if(a[l]==b[i])
					ans[1]++;
			}
			if(a[i]==b[i]){
			ans[1]--;
			ans[0]++;
			}
		}
		
		printf("%d %d\n",ans[0],ans[1]);
		ans[0]=0;
		ans[1]=0;
	}
	return 0;
}