#include<stdio.h>

int main(){
	int hill[10],max[3];
	int i,j,temp=0,maxj;
	for(i=0;i<10;i++){
		scanf("%d",&hill[i]);
	}
	for(i=0;i<3;i++){
		maxj=i;
		for(j=i+1;j<10;j++){
			if(hill[j]>hill[maxj])
				maxj=j;
		}
		temp = hill[maxj];
		hill[maxj] = hill[i];
		hill[i] = temp;
	}
	for(i=0;i<3;i++)
		printf("%d\n",hill[i]);
	return 0;
}