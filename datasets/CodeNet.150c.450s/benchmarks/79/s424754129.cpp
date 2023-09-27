#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n,r;//1~50
	int p,c;
	int card[50]={};
	int cut[50]={};
	int i,j;
	int finish=0;
	
	scanf("%d%d",&n,&r);
	while(finish==0){
	for(i=0;i<n;i++){
		card[i]=n-i;
//		printf("0\t %d\n",card[i]);
	}
	for(j=0;j<r;j++){
		scanf("%d%d",&p,&c);
		for(i=0;i<c;i++){
			cut[i]=card[p+i-1];
//			printf("1\t %d\n",cut[i]);
		}
		for(i=p-2;i>-1;i--){
			card[i+c]=card[i];
//			printf("2\t %d\n",card[i]);
		}
		for(i=0;i<c;i++){
			card[i]=cut[i];
		}
	}
//	for(i=0;i<n;i++){
//		printf("3\t %d\n",card[i]);
//	}
	printf("%d\n",card[0]);
	scanf("%d%d",&n,&r);
	if((n==0)&&(r==0)){finish=1;}
	}
	return 0;
}