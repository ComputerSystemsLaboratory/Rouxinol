#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <utility>
#include <vector>
#include <cmath>
#include <cctype>

using namespace std;

int main()
{
	char a[100], b[100];
	int A = 0, B = 0;
	int n;


	cin >> n;
	for (int j = 0; j < n; j++) {
		cin >> a >> b;
		if (strcmp(a, b) == 0) {
			A++;
			B++;
		} else if (strcmp(a, b) < 0) {
			B += 3;
		} else {
			A += 3;
		}
	}
	cout << A << " " << B <<endl;
	return (0);
}