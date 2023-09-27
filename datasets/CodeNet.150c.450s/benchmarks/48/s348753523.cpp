#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int e;
	int y_max,z_max;
	int j,k;
	int answer;
	int x,y,z;
	while(1){
		

		answer = 10000000;

		scanf("%d",&e);
		if(e == 0){
			break;
		}

		y_max = 1000;
		z_max = 100;

		for(j=0; j<=y_max; j++){
			for(k=0; k<=z_max; k++){

				y = j;
				z = k;

				x = e - y*y - z*z*z;
				//
				if(x >= 0){
					//if(e == x + y*y + z*z*z){
						if(answer > x + y + z){
							answer = x + y + z;
						}
					//}
				}
			}
		}
		printf("%d\n",answer);
	}


}