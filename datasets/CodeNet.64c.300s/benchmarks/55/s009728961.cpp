#include <stdio.h>

int main (void){
	int x = 0;
	int num[100000];
	while(num[x] == 0){
		scanf("%d",&num[x]);
		if(num[x] == 0) break;
		x++;
	}

	for(int i = 0;i < x;i++){
		printf("Case %d: %d\n",i+1,num[i]);
	}

	return 0;
}