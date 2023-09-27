#include <cstdio>

int n, r;
int card[55], tmp[55];

int main(){
	while(scanf("%d%d", &n, &r)){
		if(n == 0 && r == 0) break;
		for(int i = 0; i < n; i++) card[i] = n-i;
		for(int i = 0; i < r; i++){
			int p,c; scanf("%d%d", &p, &c); p--;
			for(int i = p; i < p+c; i++) tmp[i-p] = card[i];
			for(int i = p-1; i >= 0; i--) card[i+c] = card[i];
			for(int i = 0; i < c; i++) card[i] = tmp[i];
		}
		printf("%d\n", card[0]);
	}
}