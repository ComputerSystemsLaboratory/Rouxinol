#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int f(int);
int integral(int);

int main(void) {
	int a, b;

	while(cin >> a >> b) {
		cout << integral(a) << endl; 
		cout << integral(b) << endl;
	}
	return 0;
}
int integral(int d){
	int n = 600 / d;
	int sum = 0;

	for (int i = 1; i < n; i++) {
		sum = sum + f(d * i) * d;
	}

	return sum;
}

int f(int a) {
	return a * a;
}