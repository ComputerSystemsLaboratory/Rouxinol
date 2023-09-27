#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int s;
	cin >> s;
	printf("%d:%d:%d\n", s / 3600, s % 3600 / 60, s % 60);
	return 0;
}