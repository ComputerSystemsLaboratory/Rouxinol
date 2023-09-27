#include<stdio.h>
int main(){
	int dice[6],num,x1,y1,x2,y2;
	for(int i = 0;i<6;i++){
		scanf("%d",&dice[i]);
	}
	scanf("%d",&num);
	for(int i=0;i<num;i++){
			scanf("%d %d",&x1,&y1);
		for(int i = 0;i<6;i++){
			if(x1==dice[i]){
				x2=i;
			}
			if(y1==dice[i]){
				y2=i;
			}
		}
		if((x2==1&&y2==2)||(x2==2&&y2==4)||(x2==4&&y2==3)||(x2==3&&y2==1)){
			printf("%d\n",dice[0]);
		}
		else if((x2==5&&y2==2)||(x2==2&&y2==0)||(x2==0&&y2==3)||(x2==3&&y2==5)){
			printf("%d\n",dice[1]);
		}
		else if((x2==0&&y2==1)||(x2==1&&y2==5)||(x2==5&&y2==4)||(x2==4&&y2==0)){
			printf("%d\n",dice[2]);
		}
		else if((x2==0&&y2==4)||(x2==4&&y2==5)||(x2==5&&y2==1)||(x2==1&&y2==0)){
			printf("%d\n",dice[3]);
		}
		else if((x2==2&&y2==5)||(x2==5&&y2==3)||(x2==3&&y2==0)||(x2==0&&y2==2)){
			printf("%d\n",dice[4]);
		}
		else{
			printf("%d\n",dice[5]);
		}
	}
	return 0;
}