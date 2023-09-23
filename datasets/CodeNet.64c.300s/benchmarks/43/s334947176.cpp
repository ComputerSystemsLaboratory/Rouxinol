#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main (void){

	int sumA = 0;
	int sumB = 0;
	int fake = 0;

	for(int i=0;i<4;i++){
		scanf("%d",&fake);
		sumA += fake;
	}
	for(int i=0;i<4;i++){
		scanf("%d",&fake);
		sumB += fake;
	}

	printf("%d\n",max(sumA,sumB));

	return 0;
}