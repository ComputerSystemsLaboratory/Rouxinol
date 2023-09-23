#include <cstdio>

int Eratos[1000000];

int main()
{
	Eratos[0] = Eratos[1] = 0;
	for (int i = 2; i < 1000000; i++){
		Eratos[i] = 1;
	}
	for (int i = 2; i < 1000; i++) {
		if (Eratos[i]) {
			for (int j = 2 * i; j < 1000000; j += i) {
				Eratos[j] = 0;
			}
		}
	}
	int n,res;
	res = 1;
	for (int i = 2; i < 1000000; i++) {
		if (Eratos[i]) {
			Eratos[i] = res;
			res++;
		}
	}
	while (scanf("%d", &n) != EOF) {
		res = 0;
		while (!Eratos[n]) {
			n--;
			if (n == 0)
				break;
		}
		if (n)
			printf("%d\n", Eratos[n]);
		else
			printf("0\n");
	}
	return 0;
}