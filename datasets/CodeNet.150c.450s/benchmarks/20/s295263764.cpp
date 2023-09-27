#include <stdio.h>

int main(void){

	int S,h,ma,mb,s;

	scanf("%d",&S);

	ma = S/60;
	s = S%60;

	h = ma/60;
	mb = ma%60;

	printf("%d:%d:%d\n",h,mb,s);

	return 0;
}