#include <stdio.h>

int main(void)
{
	int n,num,d;
	int xmax,xmin,ymax,ymin;
	int x[1000],y[1000];
	scanf("%d",&num);
	while(num != 0){
		xmax = 0;
		xmin = 0;
		ymax = 0;
		ymin = 0;
		x[0] = 0;
		y[0] = 0;
		for(int i = 1; i < num; i++){
			scanf("%d %d",&n,&d);
			if(d == 0){
				x[i] = x[n] - 1;
				y[i] = y[n];
				if(x[i] < xmin){
					xmin = x[i];
				}
			}else if(d == 1){
				x[i] = x[n];
				y[i] = y[n] - 1;
				if(y[i] < ymin){
					ymin = y[i];
				}
			}else if(d == 2){
				x[i] = x[n] + 1;
				y[i] = y[n];
				if(x[i] > xmax){
					xmax = x[i];
				}
			}else if(d == 3){
				x[i] = x[n];
				y[i] = y[n] + 1;
				if(y[i] > ymax){
					ymax = y[i];
				}
			} 
		}

		printf("%d %d\n",xmax - xmin + 1,ymax - ymin + 1);
		scanf("%d",&num);
	}
	return 0;
}