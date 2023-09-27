#include <stdio.h>
#include <cmath>
#include <algorithm>

#define NUM 32000

int main(){
	int table[NUM],limit;

	for(int i=0; i < NUM;i++)table[i] = 1;
	table[0] = 0;
	table[1] = 0;

	limit = sqrt(NUM);

	for(int i=2;i<=limit;i++){
		if(table[i] == 1){
			for(int k=2*i;k < NUM; k += i){
				table[k] = 0;
			}
		}
	}

	int n,count = 0;

	scanf("%d",&n);

	printf("%d:",n);
	for(int i=2; i< NUM && n != 1; i++){
		while(table[i] == 1 && n%i == 0 && n != 1){
			printf(" %d",i);
			n /= i;
			count++;
		}
	}
	if(count == 0)printf(" %d",n);
	printf("\n");

	return 0;
}