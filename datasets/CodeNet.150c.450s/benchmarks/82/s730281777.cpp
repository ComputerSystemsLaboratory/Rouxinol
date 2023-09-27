#include<stdio.h>
typedef struct Dice{
	int d[6];
	int r[6];
	int b[6];
}dice;
int main(void)
{
	dice num;
	int q,i,c;
	int u[24],p[24],re[24]={0};
	for(i=0;i<6;i++){
		scanf("%d",&num.d[i]);
	}
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%d %d",&u[i],&p[i]);
	}
	for(int k=0;k<6;k++){
		num.b[k]=num.d[k];
	}
	for(i=0;i<q;i++){
		c=0;
		for(int k=0;k<6;k++){
			num.r[k]=num.d[k];
		}
		for(int j=0;j<4;j++){
			for(int k=0;k<6;k++){
				num.r[k]=num.b[k];
			}
			num.r[2]=num.b[0];
			num.r[3]=num.b[5];
			num.r[5]=num.b[2];
			num.r[0]=num.b[3];
			for(int k=0;k<6;k++){
				num.b[k]=num.r[k];
			}
			if(num.r[0]==u[i]){
				c=1;
				break;
			}

		}
		if(c==0){
			for(int j=0;j<4;j++){
				for(int k=0;k<6;k++){
					num.r[k]=num.b[k];
				}
				num.r[1]=num.b[0];
				num.r[4]=num.b[5];
				num.r[5]=num.b[1];
				num.r[0]=num.b[4];
				for(int k=0;k<6;k++){
					num.b[k]=num.r[k];
				}
				if(num.r[0]==u[i]){
					c=1;
					break;
				}
			}
		}
		for(int j=0;j<4;j++){
			for(int k=0;k<6;k++){
				num.r[k]=num.b[k];
			}
			num.r[1]=num.b[3];
			num.r[4]=num.b[2];
			num.r[2]=num.b[1];
			num.r[3]=num.b[4];
			for(int k=0;k<6;k++){
				num.b[k]=num.r[k];
			}
			if(num.r[1]==p[i]){
				re[i]=num.r[2];
				break;
			}

		}


	}
	for(i=0;i<q;i++){
		printf("%d\n",re[i]);
	}
	return 0;
}