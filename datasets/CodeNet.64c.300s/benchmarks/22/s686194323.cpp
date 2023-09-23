#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;



int main()
{
	int num;
	int a, b, c;

	cin >> num;

	//cin >> a >> b >> c;

	while (cin >> a >> b >> c) {
		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			printf("YES\n");
		else
			printf("NO\n");
	}

		return (0);
	
}