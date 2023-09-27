#include <stdio.h>

int main(void) {
	char table[100000][2];
	long int n,m,i,c;
	char buf;
	while(scanf("%ld",&n)){
		if(n == 0)break;
		for(i = 0; n > i; i++){
			getchar();
			scanf("%c",&table[i][0]);
			getchar();
			scanf("%c",&table[i][1]);
		}
		scanf("%ld",&m);
		for(i = 0; m > i; i++){
			getchar();
			scanf("%c",&buf);
			for(c = 0; n > c; c++)if(buf == table[c][0]) {buf = table[c][1];break;}
			printf("%c",buf);
		}
		printf("\n");
	}
	
	return 0;
}