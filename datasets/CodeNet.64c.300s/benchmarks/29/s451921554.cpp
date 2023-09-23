// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2012

#include <stdio.h>
#define min(a,b) ((a<b)?(a):(b))

int main(void) {
	while(1) {
		
		int e;
		int mmin = 10000000;
		
		scanf("%d", &e);
		if ( e == 0 ) { break; }
		
		for(int z=0; z<=100; z++) {
			for(int y=0; y<=1000; y++) {
				int x = e - z*z*z - y*y;
				if ( x<0 ) { break; }
				
				int sum = x+y+z;
				if ( mmin > sum ) { mmin = sum; }
			}
		}
		
		printf("%d\n", mmin);
	}
}