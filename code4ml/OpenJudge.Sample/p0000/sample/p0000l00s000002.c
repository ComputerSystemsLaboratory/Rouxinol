#include<stdio.h>

int main(void)
{
	int i,j,high[11]={0,0,0,0,0,0,0,0,0,0,'\0'};
	int change,judge;
	
	for(i=0;i<10;i++){
			scanf("%d",&high[i]);
	}
	for(j=0;j<20;j++){
	for(i=0;i<10;i++){
		judge = high[i]-high[i+1];
		if(judge < 0){
			change = high[i];
			high[i] = high[i+1];
			high[i+1] = change;
		}
	}
	}
		printf("%d\n",high[0]);
		printf("%d\n",high[1]);
		printf("%d\n",high[2]);
	return 0;
}