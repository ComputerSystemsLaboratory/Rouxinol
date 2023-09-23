#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int x, y;
	while (~scanf("%d%d", &x, &y)){
		int gcd = __gcd(x, y);
		printf("%d %d\n", gcd, x / gcd * y);
	}
}