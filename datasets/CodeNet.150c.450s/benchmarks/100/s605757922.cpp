#include<iostream>
#include<stdio.h>

using namespace std;

long long factorial(int n) {

	return (n > 0 ? n*factorial(n - 1) : 1);

}

int main() {
	int  n;
	scanf("%d", &n);
	
	printf("%lld\n", factorial(n));

	return 0;
}