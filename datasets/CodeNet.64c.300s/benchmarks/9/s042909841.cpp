#include<cstdio>
#include<iostream>
using namespace std;

int main() {
	double n, i, ans = 100000;
	cin >> n;
	for (i = 1; i <= n; i++) {
		ans = ans*1.05;
		if (int(ans) % 1000 != 0) ans = ans - int(ans) % 1000 + 1000;
	}
	printf("%d\n", int(ans));
	return 0;
}