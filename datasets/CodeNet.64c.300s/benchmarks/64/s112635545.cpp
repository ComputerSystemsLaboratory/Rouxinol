#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

int gcd(int a, int b) {
	if (b == 0)return a;
	return gcd(b, a%b);
}
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", gcd(max(a, b), min(a, b)));
}