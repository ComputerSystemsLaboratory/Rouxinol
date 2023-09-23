#include<cstdio>
using namespace std;

int main() {
	int a, b;
	while (~scanf("%d%d", &a, &b)) {
		printf("%d %d\n", a * b, 2 * (a + b));
	}
	return 0;
}