#include <stdio.h>

int main(void) {
	int n, i, po[2] = {0}, ca[2];
	
	while(scanf("%d", &n)){
		if(!n)break;
	po[0] = 0;
	po[1] = 0;
	for(i = 0; n > i; i++){
		scanf("%d%d", &ca[0], &ca[1]);
		if(ca[0] > ca[1]) po[0] += ca[0]+ca[1];
		else if(ca[0] < ca[1]) po[1] += ca[0]+ca[1];
		else{ po[0] += ca[0]; po[1] += ca[1];}
	}
	printf("%d %d\n",po[0],po[1]);
	}
	return 0;
}