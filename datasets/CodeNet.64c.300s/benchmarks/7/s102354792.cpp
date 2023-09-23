#include<stdio.h>
int main(void)
{
	int a,s[5][14],d=0,f,g,h,j,i;
	char z[2];
	for(i=1;i<=13;i++){
		s[1][i]=0;
		s[2][i]=0;
		s[3][i]=0;
		s[4][i]=0;
	}
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf(" %c %d",&z[1],&d);
	//	printf("%d %d\n",i,d);
		if(z[1]=='S'){
			s[1][d]=1;
		}
		else if(z[1]=='H'){
			s[2][d]=1;
		}
		else if(z[1]=='C'){
			s[3][d]=1;
		}
		else if(z[1]=='D'){
			s[4][d]=1;
		}
	}
	for(i=1;i<=4;i++){
		for(j=1;j<=13;j++){
			if(s[i][j]==0){
				if(i==1)
					printf("S %d\n",j);
				if(i==2)
					printf("H %d\n",j);
				if(i==3)
					printf("C %d\n",j);
				if(i==4)
					printf("D %d\n",j);
			}
		}
	}
	return 0;
}