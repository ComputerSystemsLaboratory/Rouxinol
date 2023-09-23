#include <stdio.h>
#include <string.h>

int main() {
	int tall;
	int top[3];

	for(int i=0;i<3;i++){
		top[i] = 0;
	}

	for(int i=0;i<10;i++){
		scanf("%d",&tall);
		if(tall >= top[0]){
			top[2] = top[1];
			top[1] = top[0];
			top[0] = tall;
		}else if(tall >= top[1]){
			top[2] = top[1];
			top[1] = tall;
		}else if(tall >= top[2]){
			top[2] = tall;
		}
	}

	for(int i=0;i<3;i++)
		printf("%d\n",top[i]);
	
	return 0;
}
