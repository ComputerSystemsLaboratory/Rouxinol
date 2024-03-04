#include <stdio.h>

int main(void)
{
	int mt[10];
	int high;
	int i;
	int ii = 0;
	
	for(i = 1; i < 10; i++){
		scanf("%d", &mt[i]);
	}
	
	for(high = 10000; high > 0 && ii < 3; high--){
		for(i = 0; i < 10; i++){
			if(mt[i] == high){
				printf("%d\n", mt[i]);
				ii++;
				break;
			}
		}
	}
	
	return 0;
}