#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;


int main(){

	int e,minimum;

	while(true){
		scanf("%d",&e);
		if(e == 0)break;

		minimum = 10000000;

		for(int z = 0; z*z*z <= e;z++){
			for(int y = 0; y*y <= e-z*z*z; y++){
				minimum = min(minimum,y+z+(e-(z*z*z+y*y)));
			}
		}
		printf("%d\n",minimum);
	}
	return 0;
}