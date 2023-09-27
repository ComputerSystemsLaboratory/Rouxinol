#include <stdio.h>

int ans[1000000];

int main()
{
	int n;
	int i,j;
	int an;
	while(scanf("%d",&n) != EOF){
		for(i = 0; i <= n; i++){
			ans[i] = 1;
		}
		for(i = 2; i <= 1000 && i <= n; i++){
			if(ans[i]){
				for(j = 2; i * j <= n; j++){
					ans[i * j] = 0;
				}
			}
		}
		an = 0;
		for(i = 2; i <= n; i++){
			if(ans[i]){
				an++;
			}
		}
		printf("%d\n",an);
	}
	return 0;
}