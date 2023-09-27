#include <stdio.h>
int main(void) {
	int n, r, i, j;
	char c;
	char d[4][13];
	char cl[] = { 'S', 'H', 'C', 'D' };

	for( i = 0; i < 4; ++i ) {
		for(j = 0; j < 13; ++j) {
			d[i][j] = 0;
		}
	}

	scanf("%d", &n );
	for( i = 0; i < n; ++i ) {
		scanf(" %c %d", &c, &r);
		if( c == 'S' ) { j = 0; }
		else if( c == 'H' ) { j = 1; }
		else if( c == 'C' ) { j = 2; }
		else if( c == 'D' ) { j = 3; }
		else { continue; }
		d[j][r-1] = 1;
	}

	for( i = 0; i < 4; ++i ) {
		c = cl[i];
		for( j = 0; j < 13; ++j ) {
			if( d[i][j] == 0 ) {
				printf("%c %d\n",c,j+1);
			}
		}
	}
	return 0;
}