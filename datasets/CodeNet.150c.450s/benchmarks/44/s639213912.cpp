#include <stdio.h>

int main(void){
	int a[4], b[4];
	int al[10];
	int hit, blow;
	while(scanf("%d %d %d %d", a, a+1, a+2, a+3) != EOF){
		scanf("%d %d %d %d", b, b+1, b+2, b+3);
		hit = blow = 0;
		for(int i=0; i<10; ++i){
			al[i] = -1;
		}
		for(int i=0; i<4; ++i){
			al[a[i]] = i;
		}
		for(int i=0; i<4; ++i){
			if(al[b[i]] == -1){ continue; }
			if(al[b[i]] == i ){ hit++; }
			else { blow++;}
		}
		printf("%d %d\n", hit, blow);
	}
	return 0;
}