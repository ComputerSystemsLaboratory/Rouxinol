#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

double fact(double x);

int main(void) {
	double n;
	while(1) {
		cin >> n;
		if(cin.eof())		break;
		
		printf("%.0f\n", fact(n));
	}
	
	return 0;
}

double fact(double x) {
	if(x == 0) {
		return 1;
	}
	return x * fact(x - 1);
}