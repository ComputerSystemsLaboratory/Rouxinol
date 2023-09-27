#include <iostream>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main(){
	int S;
	cin >> S;

	int s = S % 60;
	int m = S / 60;
	int h = m / 60;
	m = m % 60;

	printf("%d:%d:%d\n", h, m, s);

}