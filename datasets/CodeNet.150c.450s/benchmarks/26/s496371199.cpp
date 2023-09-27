#include<cstdio>
using namespace std;

int main() {
	int a, b;
	while (~scanf("%d%d", &a, &b)) {
		if (a != b) {
			printf("%s\n", a < b ? "a < b" : "a > b");
		}
		else printf("a == b\n");
	}
	return 0;
}