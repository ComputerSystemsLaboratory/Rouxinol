#include<stdio.h>
#include<string.h>

int main(){
	int zu[52][52],w,h,i,j,flag,land;
	
	while(0<=scanf("%d%d",&h,&w)){
		if(w==0&&h==0)break;
		
		memset(zu,0,sizeof(zu));
		
		for(i=1;i<=w;i++){
			for(j=1;j<=h;j++){
				scanf("%d",&zu[i][j]);
			}
		}
		
		flag=1;
		land=1;
		while(flag!=0){
			++land;
			flag=0;
			for(i=1;i<=w;i++){
				for(j=1;j<=h;j++){
					if(zu[i][j]==1){
						zu[i][j]=land;
						flag=1;
						break;
					}
				}
				if(flag==1)break;
			}
			
			while(flag==1){
				flag=2;
				for(i=1;i<=w;i++){
					for(j=1;j<=h;j++){
						if(zu[i][j]!=1)continue;
						if(zu[i+1][j]==land || zu[i-1][j]==land || zu[i][j+1]==land || zu[i][j-1]==land ||
							zu[i+1][j+1]==land|| zu[i+1][j-1]==land||zu[i-1][j+1]==land||zu[i-1][j-1]==land){
							zu[i][j]=land;
							flag=1;
						}
					}
				}
			}
		}
		for(i=1;i<=w;i++){
			for(j=1;j<=h;j++){
//				printf("%d ",zu[i][j]);
			}
//			printf("\n");
		}
		
		
		printf("%d\n",land-2);
	}
	return 0;
}