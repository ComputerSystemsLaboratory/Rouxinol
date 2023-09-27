#include<cstdio>

int main(){
	int a[4];
	int hit, blow, t;
	while(scanf("%d %d %d %d", &a[0],&a[1],&a[2],&a[3]) + 1){
		hit = blow = 0;
		for(int i = 0; i < 4; i++){
			scanf("%d", &t);
			for(int j = 0; j < 4; j++){
				if(t == a[j]){
					if(i - j){
						blow++;
					}else{
						hit++;
					}
				}
			}
		}
		printf("%d %d\n", hit, blow);
	}
}