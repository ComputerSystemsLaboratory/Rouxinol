#include <cstdio>
#include <algorithm>

using namespace std;

int gcd(int x, int y){ return y == 0 ? x : gcd(y, x % y); }
int lcm(int x, int y){ return x / gcd(x, y) * y; }

int main()
{
	int x, y;
	while (~scanf("%d%d", &x, &y)){
		printf("%d %d\n", gcd(x, y), lcm(x, y));
	}
}