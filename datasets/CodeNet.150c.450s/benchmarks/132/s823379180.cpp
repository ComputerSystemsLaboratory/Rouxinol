#include <cstdio>

int main(){
	int n, p;
	int x[50];
	while(scanf("%d%d", &n, &p)){
		if(n == 0 && p == 0) break;
		for(int i = 0; i < n; i++) x[i] = 0;
		int t = 0;
		int q = p;
		while(true){
			if(p > 0){
				x[t]++;
				if(x[t] == q){
					printf("%d\n", t);
					break;
				}
				p--;
			} else{
				p += x[t];
				x[t] = 0;
			}
			t++;
			t %= n;
		}
	}
}