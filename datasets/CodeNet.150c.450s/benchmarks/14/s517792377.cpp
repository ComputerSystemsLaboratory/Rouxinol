#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=3;i<=n;i++){
		if(i%3==0) printf(" %d",i);
		else{
			int x=i;
			while(x>0){
				if(x%10==3){
					printf(" %d",i);
					break;
				}
				x/=10;
			}
		}
	}
	printf("\n");
	return 0;
}