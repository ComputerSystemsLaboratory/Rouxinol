#include<stdio.h>
int main(void)
{
	int i,j;
	int hit,blow;
	int dataA[4],dataB[4];

	while(scanf("%d",&dataA[0])!=EOF) {

		hit=0;
		blow=0;

		for(i=1;i<4;i++){
			scanf("%d",&dataA[i]);
		}
		
		for(i=0;i<4;i++) {
			scanf("%d",&dataB[i]);
		}

		for(i=0;i<4;i++) {
			for(j=0;j<4;j++){
				if(dataA[i] == dataB[j] && i==j) {
					hit++;
				}
				else if(dataA[i] == dataB[j] && i!=j){
					blow++;
				}
			}
		}

		printf("%d %d\n",hit,blow);
		}

		return 0;
}