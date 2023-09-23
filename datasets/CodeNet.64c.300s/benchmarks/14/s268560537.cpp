#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a, b, h = 0, s = 0, m = 0;
	cin >> a >> b;
	if (a > b) {
		printf("a > b\n");
	}
	else if (a < b) {
		printf("a < b\n");
	}
	else {
		printf("a == b\n");
	}
}