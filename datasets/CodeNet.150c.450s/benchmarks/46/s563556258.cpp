#include <cstdio>

int main(){
	while(1){
		int n, x;
		long ans=0;
		scanf(" %d %d", &n, &x);
		if(n==0) break;
		
		for(int i=1; i<=n-2; ++i){
			for(int j=i+1; j<=n-1; ++j){
				for(int k=j+1; k<=n; ++k){
					if(i+j+k==x) {
						++ans;
						break;
					}
				}
			}
		}
	
		printf("%ld\n", ans);
	}

	return 0;
}