#include<cstdio>

int main() {
	int n;
	double debt=100000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		debt = debt + debt*0.05;
		if ((int)debt % 1000 > 0) {
			debt = debt - (int)debt % 1000;
			debt += 1000;
		}
	}
	printf("%d\n", (int)debt);

	return 0;
}
