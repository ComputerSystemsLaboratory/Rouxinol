#include <stdio.h>

int main(){
	int N[100];
	int n;
	
	int i;
	
	int max = 0;
	
	for(i = 0;i < 100;i++){
		N[i] = 0;
	}
	
	while(scanf("%d",&n) != EOF){
		N[n]++;
	}
	
	for(i = 0;i < 100;i++){
		if(N[i] > max){
			max = N[i];
		}
	}
	
	for(i = 0;i < 100;i++){
		if(N[i] == max){
			printf("%d\n",i);
		}
	}
	
	return 0;
}