#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

	int num,n_min,n_max,div,div_max,ans,pre,tmp;

	while(true){
		scanf("%d %d %d",&num,&n_min,&n_max);
		if(num == 0 && n_min == 0 && n_max == 0)break;

		div_max = -1;
		for(int i = 1; i <= num; i++){
			scanf("%d",&tmp);

			if(i >= n_min+1 && i <= n_max+1){
				div = pre - tmp;
				if(div >= div_max){
					div_max = div;
					ans = i-1;
				}
			}
			pre = tmp;
		}
		printf("%d\n",ans);
	}
    return 0;
}