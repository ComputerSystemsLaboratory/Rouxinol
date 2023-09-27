#include<stdio.h>
#include<math.h>

int main(){

	int n, a,count,amari;

	scanf("%d",&n);

	count = 0;

	for(int i = 0; i < n; i++){
		scanf("%d",&a);

		amari = 10;

		int x = 0;

		if(a == 2) {
			count = count + 1;	
			//printf("count%d\n",count);
		}
		else if(a%2==1){
			for(int i = 2; i < sqrt(a)+1; i++){
				amari = a%i;	
				//printf("amari %d\n",amari);
				if(amari == 0) x = x + 1;
			}
			if(x==0) count = count + 1;
			//printf("count %d\n",count);
		}
	}

	printf("%d\n",count);

	return 0;
}