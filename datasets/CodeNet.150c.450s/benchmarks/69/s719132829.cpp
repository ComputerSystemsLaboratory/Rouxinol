#include <stdio.h>

int main(void){
	int topB,topC;
	int n,tmp;
	int valid;
	
	for (scanf("%d", &n); n--;){
		topB=topC=0;
		valid=1;
		for (int i=0; i<10; i++){
			scanf("%d", &tmp);
			if (tmp > topB) topB=tmp;
			else if (tmp > topC)topC=tmp;
			else {
				valid=0;
				for (;i<10;i++) scanf("%d", &tmp);
				break;
			}
		}
		printf("%s\n",valid?"YES":"NO");
	}
	return 0;
}