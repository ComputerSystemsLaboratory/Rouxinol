#include<cstdio>

int main(){
	int n, count = 0;

	while(scanf("%d", &n) + 1){
		count = 0;
		for (int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				for(int k = 0; k < 10; k++){
					for(int l = 0; l < 10; l++){
						if(n == i + j + k + l){
							count++;
						}
					}
				}
			}
		}
		printf("%d\n", count);
	}
}