#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b) {
		printf("%d\n", (int)log10(a + b)+1);
	}
    return 0;
}