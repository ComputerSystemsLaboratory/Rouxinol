#include<stdio.h>

int main(void){
	int jiku_x,jiku_y;
	int kouji_x,kouji_y;
	int kouji;
	int cut_i,cut_j;
	int tuugakuro[17][17];

	while(1){
		scanf("%d%d",&jiku_x,&jiku_y);

		if((jiku_x == 0) && (jiku_y==0)){
			break;
		}

		for(cut_i=0;cut_i<jiku_x+1;cut_i++){//初期化
			for(cut_j=0;cut_j<jiku_y+1;cut_j++){
				tuugakuro[cut_i][cut_j]=1; 
			}
		}
		scanf("%d",&kouji);
		
		for(cut_i=0;cut_i<kouji;cut_i++){//工事中のマスを0に
			scanf("%d%d",&kouji_x,&kouji_y);
			tuugakuro[kouji_x][kouji_y]=0;
		}

		for(cut_i=2;cut_i<jiku_x+1;cut_i++){//ｘ軸部分
			if(tuugakuro[cut_i][1] != 0){
				tuugakuro[cut_i][1]=tuugakuro[cut_i -1][1];
			}
		}

		for(cut_i=2;cut_i<jiku_y+1;cut_i++){//ｙ軸部分
			if(tuugakuro[1][cut_i] != 0){
				tuugakuro[1][cut_i]=tuugakuro[1][cut_i -1];
			}
		}

		for(cut_i=2;cut_i<jiku_x+1;cut_i++){
			for(cut_j=2;cut_j<jiku_y+1;cut_j++){
				if(tuugakuro[cut_i][cut_j] != 0){
					tuugakuro[cut_i][cut_j]=tuugakuro[cut_i -1][cut_j]+tuugakuro[cut_i][cut_j -1];
				}
			}
		}

		printf("%d\n",tuugakuro[jiku_x][jiku_y]);
	}
}