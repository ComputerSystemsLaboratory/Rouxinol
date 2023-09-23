#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int a, b, c, d, w, x, y, z;
	scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &w, &x, &y, &z);

	int t;
	t = max(a + b + c + d, w + x + y + z);

	printf("%d\n", t);

	return 0;
}