#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int MAXN = 10000;
int a[MAXN + 10];
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int p = 0;
	while (scanf("%d", &a[p++])!=EOF);
	sort(a, a + p,cmp);
	printf("%d\n%d\n%d\n", a[0], a[1], a[2]);
	return 0;
}
