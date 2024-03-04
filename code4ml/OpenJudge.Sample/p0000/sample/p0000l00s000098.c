#include<stdio.h>

int main()
{
	int high[10];
	int i, j, temp;
	
	for(i = 0; i < 10; i++){
		scanf("%d",&high[i]);
	}
	
	for(i = 0; i < 10; i++){
		for(j = 9; j > i; j--){
			if(high[j - 1] < high[j]){
				temp = high[j];
				high[j] = high[j - 1];
				high[j - 1]= temp;
			}
		}
	}
	printf("%d\n%d\n%d",high[0], high[1], high[2]);
	
	return 0;
}