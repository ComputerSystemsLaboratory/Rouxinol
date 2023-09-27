#include <stdio.h>
#include <math.h>
int main(void) {
	int a[4][3][10];
	int n,b,f,r,v;
	int i,j,k;
	int x;
	for( i = 0; i < 4; ++i ){
		for( j = 0; j < 3; ++j ) {
			for( k = 0; k < 10; ++k ) {
				a[i][j][k] = 0;
			}
		}
	}
	scanf("%d", &n );
	for( i = 0; i < n; ++i ) {
		scanf( "%d %d %d %d", &b, &f, &r, &v );
		x = a[b-1][f-1][r-1];
		a[b-1][f-1][r-1] = fmin(9,fmax(x+v,0));
	}

	
	for( i = 0; i < 4; ++i ){
		if( i > 0 ) {  
			printf("####################\n");
		}
		for( j = 0; j < 3; ++j ) {
			for( k = 0; k < 10; ++k ) {
				printf(" %d",a[i][j][k]);
			}
			putchar('\n');
		}
	}

	return 0;
}