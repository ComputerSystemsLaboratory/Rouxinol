#include <stdio.h>
#include <string.h>

int main(void) {
	int n,i,j;
	int data[31];
	
	while(1){
		scanf("%d",&n);
		if(!n) break;
		memset(data,0,sizeof(data));
		data[0] = 1;
		for(i = 0;i < n;i++){
			for(j = 1;j <= 3;j++){
				data[i+j] += data[i];
			}
		}
		printf("%d\n",(data[n]+3649)/3650);
	}
	
	return 0;
}