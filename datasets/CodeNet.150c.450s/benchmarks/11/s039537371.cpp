#include <stdio.h>
#include <math.h>

int main(){
	int n,a,d[4][14]={0};
	char c;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d",&c,&a);
		//printf(" c%c a%d\n",c,a);
		if(c=='S') d[0][a]=1;
		else if(c=='H') d[1][a]=1;
		else if(c=='C') d[2][a]=1;
		else if(c=='D') d[3][a]=1;
 	}
	for(int i=0;i<4;i++){
		for(int j=1;j<=13;j++){
			if(d[i][j]==0){
				if(i==0) c='S';
				else if(i==1) c='H';
				else if(i==2) c='C';
				else if(i==3) c='D';
				printf("%c %d\n",c,j);
			}
		}
	}
	return 0;
}