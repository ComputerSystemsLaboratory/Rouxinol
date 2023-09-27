#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int main(){

	double x,y,z,maximum,tmp;

	while(true){
		scanf("%lf %lf %lf",&x,&y,&z);
		if(x == 0 && y == 0 && z == 0)break;

		maximum = 0;

		for(double i = 1; i <= z-1; i+=1){
			for(double k = i; k <= z-1; k++){
				if(i+k > z)break;

				if(floor(i*(100+x)/100)+floor(k*(100+x)/100) == z){
					tmp = floor(i*(100+y)/100) + floor(k*(100+y)/100);
					maximum = max(maximum,tmp);
				}
			}
		}

		printf("%.0f\n",maximum);

	}

	return 0;
}