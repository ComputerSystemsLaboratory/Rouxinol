#define scanf_s scanf
#include <iostream>
using namespace std;
int F[46] = { 0 };
int fib(int n) 
{
	if (n >= 0) {
		if (n <= 1) { return F[n] = 1; }
		if (F[n] != 0) {
			return F[n];
		}
		return F[n] = fib(n - 1) + fib(n - 2);
	}
}
int main(void)
{
	int n;
	scanf_s("%d", &n);
	printf("%d\n", fib(n));
}