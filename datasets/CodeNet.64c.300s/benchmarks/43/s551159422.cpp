
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	int A=0, B=0, t;

	for (int i = 0; i < 4; i++) {
		scanf("%d", &t);
		A += t;
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &t);
		B += t;
	}

	printf("%d\n", max(A, B));

	return 0;
}