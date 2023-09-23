#include <stdio.h>
int main(){
		long long int s,max,min,k; 
		int n;
		scanf("%d",&n);
		max = -1000000;
		min = 1000000;
		s = 0;
		for (int i=0; i<n ; ++i){
			scanf("%lld",&k);
				if(k>max) max = k;
				if(k<min) min = k;
				s =s+k;
		};
		printf("%lld %lld %lld\n",min ,max, s);
	    return 0;
}