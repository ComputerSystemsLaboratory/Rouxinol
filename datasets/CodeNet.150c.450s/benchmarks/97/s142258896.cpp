#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int count;
	int point[200][2/*x,y*/];

	int n,d;

	while(1) {
		scanf( "%d", &count );
		if ( count == 0 ) { break; }

		point[0][0]=0;
		point[0][1]=0;
		for ( int i=1; i<count; i++ ) {
			scanf("%d %d", &n, &d);

			switch ( d ) {
			case 0: //left
				point[i][0] = point[n][0]-1;
				point[i][1] = point[n][1];
				break;
			case 1: //down
				point[i][0] = point[n][0];
				point[i][1] = point[n][1]-1;
				break;
			case 2: //right
				point[i][0] = point[n][0]+1;
				point[i][1] = point[n][1];
				break;
			case 3: //up
				point[i][0] = point[n][0];
				point[i][1] = point[n][1]+1;
				break;
			}
		}

		int xmin,xmax,ymin,ymax;
		xmin=0, xmax=0, ymin=0, ymax=0;
		for (int i=0; i<count; i++ ) {
			if ( xmax < point[i][0] ) { xmax = point[i][0]; }
			if ( xmin > point[i][0] ) { xmin = point[i][0]; }
			if ( ymax < point[i][1] ) { ymax = point[i][1]; }
			if ( ymin > point[i][1] ) { ymin = point[i][1]; }
		}
		
		printf("%d %d\n", xmax-xmin+1, ymax-ymin+1);
	}
	
	return 0;
}