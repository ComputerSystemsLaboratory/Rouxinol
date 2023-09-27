#include <stdio.h>

int main(){
	int m,na,nb,p[200];
	while(1){
		scanf("%d %d %d",&m,&na,&nb);
		if(!m) break;
		for(int i=0;i<m;i++)
			scanf("%d",&p[i]);
		int max=0;
		int ans;
		for(int i=na;i<=nb;i++){
			if(max<=p[i-1]-p[i]){
				max=p[i-1]-p[i];
				ans=i;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}