#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;

int main() {

	int i;
	double no[6] = { 0 }, a, b;

	while (cin >> no[0]) {
	
	for (i = 1; i < 6; i++) {
			cin >> no[i];
		}
		
		a = ((no[2] * no[4]) - (no[1] * no[5])) / ((no[0] * no[4]) - (no[1] * no[3]));
		b = ((no[3] * no[2]) - (no[0] * no[5])) / ((no[1] * no[3]) - (no[0] * no[4]));
		if (a == 0)
			a = 0;
		if (b == 0)
			b = 0;
		
		printf("%.3f %.3f\n", a, b);
	} 

	return 0;
}