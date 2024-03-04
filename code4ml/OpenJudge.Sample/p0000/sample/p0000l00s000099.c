#include <stdio.h>

int main(void){
	int high[10] = {0};
	int a = 0;
	int i = 0 , j = 0 , k = 0;
	unsigned char bo = 0;
	
	for(i=0;i<=9;i++)
		scanf("%d",&high[i]);
	
	do{
		bo = 0;
		for(j = 0 ; j <= 8 ; j++){
			if(high[j] < high[(j+1)]){
				a = high[j];
				high[j] = high[(j+1)];
				high[(j+1)] = a;
				bo = 1;
			}
		}
	}while(bo);
	
	printf("%d\n",high[0]);
	printf("%d\n",high[1]);
	printf("%d\n",high[2]);
	
	return (0);
}