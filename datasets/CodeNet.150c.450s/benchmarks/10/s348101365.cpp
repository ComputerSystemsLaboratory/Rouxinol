#include <stdio.h>

int main(void){

	int n;
	int i,j;
	int sum[120]={0};
	
	scanf("%d", &n);
	
	int building[n];
	int floor[n];
	int room[n];
	int people[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&building[i]);
		scanf("%d",&floor[i]);
		scanf("%d",&room[i]);
		scanf("%d",&people[i]);
		sum[(building[i]-1)*30+(floor[i]-1)*10+room[i]-1] += people[i];
	}

	for(i=0;i<120;i++){
		if(i%30==29 && i!=119){
			printf(" %d\n",sum[i]);
			for(j=0;j<20;j++){
				printf("#");
			}
			printf("\n");
		}else if(i%10==9){
			printf(" %d\n",sum[i]);
		}else{
			printf(" %d",sum[i]);
		}
	}
	
	return 0;
}