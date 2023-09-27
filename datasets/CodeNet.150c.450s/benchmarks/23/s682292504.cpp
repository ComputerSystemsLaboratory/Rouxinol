#include <cstdio>
using namespace std;

int F[45];

int fib(int x)
{
	if (F[x]) return F[x];
	if (x <= 1) return F[x] = 1;
	return F[x] = fib(x - 1) + fib(x - 2);
}

int main()
{
	int x;
	scanf("%d", &x);

	printf("%d\n", fib(x));

	return 0;
}