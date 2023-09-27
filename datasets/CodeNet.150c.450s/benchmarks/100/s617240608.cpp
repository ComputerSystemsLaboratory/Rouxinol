#define scanf_s scanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 81
#define _MAX 100
#define ABC 26
int main(void)
{
	int n;
	long long int ans = 1;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; ++i) {
		ans *= i;
	}
	printf("%lld\n", ans);
}