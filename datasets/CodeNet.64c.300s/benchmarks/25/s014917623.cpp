#include <stdio.h>

int main()
{
	int a[4];
	int b[4];
	while(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]) != EOF){
		int hit = 0;
		int blow = 0;
		scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3]);
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 4; j++){
				if(a[i] == b[j]){
					blow++;
				}
			}
			if(a[i] == b[i]){
				hit++;
				blow--;
			}
		}
		printf("%d %d\n",hit,blow);
	}
	return 0;
}