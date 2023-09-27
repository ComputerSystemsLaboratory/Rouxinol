#include<cstdio>

int main(){
	int n, m;
	int p;
	while (scanf("%d %d %d", &n, &m, &p) && n | m | p){
		int sum = 0;
		int hit = 0;
		for (int i = 0; i < n; ++i){
			int	x;
			scanf("%d", &x);
			if (i + 1 == m)hit = x;
			sum += x * 100;
		}
		if (hit == 0){
			printf("%d\n", 0);
		}
		else{
			printf("%d\n", (sum*(100-p) / 100) / hit);
		}
	}
	return 0;
}