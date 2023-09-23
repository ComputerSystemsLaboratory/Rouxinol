#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int d;
	while (scanf("%d", &d) != EOF) {
		long sum = 0;
		for (int i=d; i<600; i+=d) {
			sum += d*pow(i, 2);
		}
		cout << sum << endl;
	}
}