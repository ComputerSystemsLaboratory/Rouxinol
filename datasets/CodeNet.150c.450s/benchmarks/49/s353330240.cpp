#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <queue>

using namespace std;


int main(){

	int n,minimum,maximum,sum,tmp;

	while(true){
		scanf("%d",&n);
		if(n == 0)break;

		sum = 0;
		minimum = 100000;
		maximum = -1;

		for(int i = 0; i < n; i++){
			scanf("%d",&tmp);
			sum += tmp;
			minimum = min(minimum,tmp);
			maximum = max(maximum,tmp);
		}

		sum -= minimum;
		sum -= maximum;

		printf("%d\n",sum/(n-2));

	}

	return 0;
}