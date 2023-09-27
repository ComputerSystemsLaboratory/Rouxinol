#include <cstdio>
using namespace std;

int main() {
	int p;
	bool submit[31];

	for (int i = 1;i <= 30;i++) {
		submit[i] = false;
	}
	for (int i = 0;i < 28;i++) {
		scanf("%d", &p);
		submit[p] = true;
	}

	for (int i = 1;i <= 30;i++) {
		if (!submit[i]) {
			printf("%d\n", i);
		}
	}

	return 0;
}