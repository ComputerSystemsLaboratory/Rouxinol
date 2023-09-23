#include <stdio.h>

#define MAX 16

int main(void){
	int w,h,n;
	int ng[MAX][MAX], num[MAX][MAX];
	
	while (scanf("%d%d",&w,&h), w){
		// reset NG points and num of routes;
		for (int i=0;i<w;i++){
			for (int j=0;j<h;j++){
				ng[i][j] = num[i][j] = 0;
			}
		}
		// set NG points;
		scanf("%d", &n);
		for (int i=0;i<n;i++){
			int x,y;
			scanf("%d%d",&x,&y);
			ng[x-1][y-1] = 1;
		}
		// count num of routes;
		num[0][0] = 1;
		for (int i=1;i<=(w-1)+(h-1); i++){
			for (int j=0;j<=i; j++){
				int x, y;
				x = j; y = i-j;
				if (x<w && y<h && !ng[x][y]){
					if (x>=1) num[x][y] += num[x-1][y];
					if (y>=1) num[x][y] += num[x][y-1];
//					printf("\tnum of rt. to (%d,%d): %d\n", x, y, num[x][y]);
				}// else printf("(%d,%d) is out of field\n",x,y);
			}
		}
/*		puts("result:");
		for (int y=h-1;y>=0;y--){
			for (int x=0;x<w;x++){
				printf("%02d ", num[x][y]);
			}
			puts("");
		}
		*/
		printf("%d\n",num[w-1][h-1]);
	}
	return 0;
}