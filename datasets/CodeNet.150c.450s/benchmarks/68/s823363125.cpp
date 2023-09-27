#include <stdio.h>
#include <algorithm>
#include <limits.h>
#include <math.h>

using namespace std;

int main(void){
	int num, min, a[1000];

	while(1){
		scanf("%d", &num);
		if(!num) break;
		for(int i=0; i<num; i++){
			scanf("%d", &a[i]);
		}

		sort(a, a+num);
		min=INT_MAX;
		for(int i=0; i<num-1; i++){
			min = fmin(min, a[i+1]-a[i]);
		}

		printf("%d\n", min);
	}

	return 0;
}
