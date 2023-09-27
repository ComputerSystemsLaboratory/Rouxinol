#include <cstdio>

const int W_MAX = 30;
const int N_MAX = 30;

int w;
int n;
int a[N_MAX + 1];
int b[N_MAX + 1];
int out[W_MAX + 1];

void chenge(int *farst, int *second){
	int tmp;
	tmp = *farst;
	*farst = *second;
	*second = tmp;
}

int main(void){
	scanf("%d", &w);
	scanf("%d", &n);

	for(int i = 0; i <= w; i++){
		out[i] = i;
	}

	for(int i = 1; i <= n; i++){
		scanf("%d,%d", &a[i], &b[i]);
		chenge(&out[a[i]], &out[b[i]]);
	}
	
	for(int i = 1; i <= w; i++){
		printf("%d\n", out[i]);
	}

	return 0;
}