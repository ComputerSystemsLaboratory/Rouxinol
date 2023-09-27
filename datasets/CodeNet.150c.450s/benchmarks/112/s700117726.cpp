#include <stdio.h>

int main(void)
{
	unsigned char table[256];
	char c[2];
	int n, m;
	
	while (1){
		for (int i = 0; i < 256; i++){
			table[i] = i;
		}
		
		scanf("%d", &n);
		if (n == 0){
			break;
		}
		for (int i = 0; i < n; i++){
			char c1[2], c2[2];
			scanf("%s%s", c1, c2);
			
			table[c1[0]] = c2[0];
		}
		scanf("%d", &m);
		for (int i = 0; i < m; i++){
			scanf("%s", c);
			
			printf("%c", table[c[0]]);
		}
		
		puts("");
	}
}