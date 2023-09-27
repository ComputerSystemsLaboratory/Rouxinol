#include<cstdio>
#include<algorithm>
using namespace std;

int main() {
	//freopen("test.txt", "r", stdin);
	int a, b;
	while (~scanf("%d%d", &a, &b) && (a || b)) {
		if (a > b) swap(a, b);
		printf("%d %d\n", a, b);
	}
	return 0;
}