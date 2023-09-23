#include<stdio.h>
int main(void){
	int i,t,gougou,gou,a,b,ab[100][100]={{0}};
	gou=0,gougou=0;
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++){
		for(t=0;t<b;t++){
			scanf("%d",&ab[i][t]);
		}
	}
	
	for(i=0;i<a;i++){
		
		for(t=0;t<b;t++){
			printf("%d ",ab[i][t]);
			gou+=ab[i][t];
			if(0==t+1-b){
				printf("%d",gou);
				gougou+=gou;
				gou=0;
			}
			
			
		}
		
				printf("\n");
}
	for(i=0;i<b;i++){
		
		for(t=0;t<a;t++){
			
			gou+=ab[t][i];
			if(0==t+1-a){
				printf("%d ",gou);
				
				gou=0;
			}
			
			
		}
}
	printf("%d\n",gougou);
	return 0;
}