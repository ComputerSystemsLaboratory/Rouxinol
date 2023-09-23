#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int a, b, c, A, B, C, n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		A = a*a; B = b*b; C = c*c;
		if(A == B + C || B == A + C || C == A + B) {
			printf("YES\n");
		}else printf("NO\n");
	}

	return 0;
}