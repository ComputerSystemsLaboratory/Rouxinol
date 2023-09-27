#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int a, max1=0,b[101] = {};

	while (cin>> a) {
		b[a]++;
		max1 = max(b[a], max1);
	}

	for (int i = 0; i < 101; i++) {
		if (b[i] == max1)cout<< i <<endl;
	}

	return 0;
}