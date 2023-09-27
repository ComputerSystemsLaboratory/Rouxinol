#include <stdio.h>

int main(){
	float x1,y1,x2,y2,x3,y3,x4,y4;
	float del1,del2;
	
	int n;
	scanf("%d",&n);
	int i;
	
	for(i = 0;i < n;i++){
		scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	
		if(x1-x2 == 0&&x3-x4 == 0){
			printf("YES\n");
		}else if(x1-x2 == 0||x3-x4 == 0){
			printf("NO\n");
		}else{
			del1 = (y1-y2)/(x1-x2);
			del2 = (y3-y4)/(x3-x4);
		
			if(del1 == del2){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}
	}
	return 0;
}