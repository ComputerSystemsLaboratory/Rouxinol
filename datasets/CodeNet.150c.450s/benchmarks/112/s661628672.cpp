#include <stdio.h>

char scanValidChar(void){
	char c;
	do {
		scanf("%c", &c);
	} while (c <= 32 || c > 127);
	return c;
}

int main(void){
	char table[256];
	int n;
	char s, d;
	
	while (scanf("%d\n",&n), n){
		// reset table
		for (int i=0; i<256; i++) table[i] = i;
		// load table
		for (int i=0; i<n; i++){
			s = scanValidChar();
			d = scanValidChar();
			table[s] = d;
	//		printf("%c(%d) -> %c(%d)\n", s, s, d, d);
		}
		scanf("%d", &n);
		for (int i=0; i<n; i++){
			printf("%c", table[scanValidChar()]);
		}
		puts("");
	}
	
	return 0;
}