#include <cstdio>
#include <iostream>

using namespace std;

const int N = 1000000;

int stack[N], top;

int main() {
	int n;
	top = 0;
	while (scanf("%d", &n) != EOF) {
		if (n) stack[top++] = n;
		else printf ("%d\n", stack[--top]);
	}
	return 0;
}