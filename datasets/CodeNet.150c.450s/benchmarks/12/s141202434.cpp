#include <iostream>
#include <stdio.h>
#define MAX_INPUT 250

using namespace std;

int H[MAX_INPUT+1];
int n;//num of input

int main(){
	int tmp;

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d",&tmp);
		H[i] = tmp;
	}

	for(int i=0;i<n;i++){
		printf("node %d: key = %d, ",(i+1),H[i]);

		if((int)(i+1)/2 > 0) printf("parent key = %d, ",H[(int)(i+1)/2-1]);
		if(2*(i+1) <= n) printf("left key = %d, ",H[2*(i+1)-1]);
		if(2*(i+1)+1 <= n) printf("right key = %d, ",H[2*(i+1)+1-1]);
		printf("\n");
	}

	return 0;
}