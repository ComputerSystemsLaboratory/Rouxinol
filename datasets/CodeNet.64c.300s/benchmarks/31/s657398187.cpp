#include <stdio.h>

int main()
{
	bool teisyutu[31];
	int in;

	for(int i = 0; i < 31; i++){
		teisyutu[i] = false;
	}
	teisyutu[0] = true;
	
	for(int i = 0; i < 28; i++){
		scanf("%d",&in);
		teisyutu[in] = true;
	}
	for(int i = 0; i <= 30; i++){
		if(!teisyutu[i]){
			printf("%d\n",i);
		}
	}

	return 0;
}