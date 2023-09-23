#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int x, i = 1;
	cin >> x;
	while (x != 0) {
		printf("Case %d: %d\n", i++, x);
		cin >> x;
	}
	return 0;
}