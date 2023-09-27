#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

	int array[5];
	scanf("%d %d %d %d %d",&array[0],&array[1],&array[2],&array[3],&array[4]);

	for(int i=1;i<=4;i++){
		for(int k=4;k>=i;k--){
			if(array[k]>array[k-1])swap(array[k],array[k-1]);
		}
	}

	for(int i=0;i<4;i++)printf("%d ",array[i]);
	printf("%d\n",array[4]);

    return 0;
}