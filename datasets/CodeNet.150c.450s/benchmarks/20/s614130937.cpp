#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int S;
	cin >> S;
	int h = S / (60 * 60);
	int m = (S % (60 * 60)) / 60;
	int s = S % 60;
	printf("%d:%d:%d\n", h, m, s);
	return 0;
}