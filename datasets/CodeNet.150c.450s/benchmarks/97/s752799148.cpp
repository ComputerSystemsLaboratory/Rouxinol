#include <stdio.h>


int main(void){
	int x, y, N, n, d, i, j;
	int sx[200], sy[200];
	int SW, SS, SE, SN;
	while(1){
		SW = SS = SE = SN = 0;
		scanf("%d",&N);
		if(N == 0)
			break;
		x = y = 0;
		sx[0] = x; sy[0] = y;
		for(i = 1;i < N;i++){
			scanf("%d%d",&n,&d);
			x = sx[n]; y = sy[n];
			if(d == 0)
				x--;
			else if(d == 1)
				y++;
			else if(d == 2)
				x++;
			else
				y--;
			sx[i] = x; sy[i] = y;
			if(SW > x)
				SW = x;
			else if(SS < y)
				SS = y;
			else if(SE < x)
				SE = x;
			else if(SN > y)
				SN = y;
		}
		printf("%d %d\n",SE - SW + 1,SS - SN + 1);
	}
	return 0;
}