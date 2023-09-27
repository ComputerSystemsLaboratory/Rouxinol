#include <cstdio>

using namespace std;

int main(void){
	int hit, blow, a[4], b[4], i, j;
	while(scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]) != EOF){
		hit = blow = 0;
		for(i = 0;i < 4;i++){
			scanf("%d",&b[i]);
		}
		for(i = 0;i < 4;i++){
			for(j = 0;j < 4;j++){
				if(a[i] == b[j] && i == j){
					hit++;
				}else if(a[i] == b[j]){
					blow++;
				}
			}
		}
		printf("%d %d\n",hit,blow);
	}
	return 0;
}