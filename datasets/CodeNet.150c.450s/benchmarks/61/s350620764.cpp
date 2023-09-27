#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	int a, b, c, d, e;
	while (cin >> a >> b >> c >> d >> e, a || b || c || d || e) {
		int f[100];
		for (int k = 0; k < a; k++)scanf("%d", &f[k]);
		int sum = 0;
		for (int i = 0; i <= 10000; i++) {
			if (e == f[sum]) {
				if (sum + 1 == a) { cout << i << endl; goto l; }
				sum++;
			}
			e = (e*b + c) % d;
		}
		puts("-1");
	l:;
	}
}