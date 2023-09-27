#include <cstdio>
#include <iostream>
using namespace std;

long long fact(int n);

int main()
{
	int n;

	scanf("%d", &n);

	printf("%lld\n", fact(n));

	return (0);
}

long long fact(int n)
{
	if (n == 0){
		return (1);
	}
	else {
		return (n * fact(n - 1));
	}
}