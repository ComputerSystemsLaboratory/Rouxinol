#include <stdio.h>
#include <math.h>

using namespace std;

int main(void){
	int h, w, i, j, mh, mw;
	double min;
	while(1){
		fscanf(stdin,"%d%d",&h,&w);
		if(h == 0 && w == 0) break;
		min = 0x7FFFFFFF;
		for(i = 1;i <= 150;i++){
			for(j = i + 1;j <= 150;j++){
				if(sqrt((double)(h * h + w * w)) < sqrt((double)(i * i + j * j)) || (sqrt((double)(h * h + w * w)) == sqrt((double)(i * i + j * j)) && h < i)){
					if(min > sqrt((double)(i * i + j * j))){
						min = sqrt((double)(i * i + j * j));
						mh = i, mw = j;
					}
				}
			}
			if(j != 151) break;
		}
		fprintf(stdout,"%d %d\n",mh,mw);
	}
	return 0;
}