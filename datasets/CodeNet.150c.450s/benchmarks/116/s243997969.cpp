#include <stdio.h>
#include <cmath>
#include <algorithm>

int main(){
	int n,k,S,max,count;

	while(true){
		scanf("%d %d",&n,&k);
		if(n == 0 && k == 0)break;
		max = -1000000001;
		S = 0;
		count = 0;
		int array[n];
		for(int i = 0; i < n; i++){
			scanf("%d",&array[i]);
			count++;
			if(count == k){
				S += array[i];
				max = (max >= S)?max:S;
			}else if(count >  k){
				S -= array[i-k];
				S += array[i];
				max = (max >= S)?max:S;
			}else{
				S += array[i];
			}
		}
		printf("%d\n",max);
	}

	return 0;
}