#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

#define NUM 1000001

int main(){
	int* table = new int[NUM];
	int limit;

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

	int a,d,n,count;

	while(true){
		scanf("%d %d %d",&a,&d,&n);
		if(a == 0 && d == 0 && n == 0)break;

		count = 0;
		for(int i=1; i<= 1000000; i++){
			if(table[a+(i-1)*d] == 1)count++;
			if(count == n){
				printf("%d\n",a+(i-1)*d);
				break;
			}
		}
	}
	return 0;
}