#include<cstdio>
int main(void){
	int n;
	int a,b;
	int s;
	while (scanf("%d", &n) != EOF){
		s = 0;
		for (int i = 0; i < 19; i++){
			if (n - 18 <= i&&i <= n){
				if (i < 9)a = i + 1;
				else a = 19 - i;
				if (n < i + 9)b = n - i + 1;
				else b = 19 + i - n;
				s = (a*b) + s;
			}
		}
		printf("%d\n", s);
	}
	return 0;
}