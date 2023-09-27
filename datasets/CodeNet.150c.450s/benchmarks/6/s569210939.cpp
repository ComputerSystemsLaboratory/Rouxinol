#include<cstdio>
using namespace std;

int main() {
	int a, b, c;
	while (~scanf("%d%d%d", &a, &b, &c)) {
		printf("%s\n", (a < b && b < c) ? "Yes" : "No");
	}
	return 0;
}