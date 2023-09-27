#include<cstdio>

int main(){
	int r, c, t;
	scanf("%d %d", &r, &c);
	int a[c];

	for(int i = 0; i < c; i++){
		a[i] = 0;
	}

	for(int i = 0; i < r; i++){
		int s = 0;
		for(int j = 0; j < c; j++){
			scanf("%d", &t);
			printf("%d ", t);
			s += t;
			a[j] += t;
		}
		printf("%d\n", s);
	}

	int b = 0;
	for(int i = 0; i < c; i++){
		printf("%d ", a[i]);
		b += a[i];
	}
	printf("%d\n", b);
}	