#include <stdio.h>

int main(void){

	int a,b,c;
	int kosu = 0;

	scanf("%d %d %d",&a,&b,&c);

	for(;a<=b;a++){
		if(c%a==0){
			kosu++;
		}
	}
	printf("%d\n",kosu);

	return 0;
}