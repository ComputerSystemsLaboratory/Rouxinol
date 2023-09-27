#include<cstdio>

int main(){
	int n, x;
	scanf("%d %d", &n, &x);
	while(n || x){
		int count = 0;
		for(int i = 1; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				for(int k = j + 1; k <= n; k++){
					if(x == i + j + k){
						count++;
					}
				}
			}
		}
		printf("%d\n", count);
		scanf("%d %d", &n, &x);
	}
	return 0;
}