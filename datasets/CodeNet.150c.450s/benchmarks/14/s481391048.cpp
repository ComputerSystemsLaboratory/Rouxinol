#include <cstdio>

int main(){
	int n, i=1;
	scanf(" %d", &n);
	
	while(i <= n){
		int x=i;
		
		if(x%3==0) {
			printf(" %d", i);
		}
		else {
			while(x){
				if(x%10==3){
					printf(" %d", i);
					break;
				}
				else x/=10;
			}
		}
		
		++i;
	}
	printf("\n");

	return 0;
}