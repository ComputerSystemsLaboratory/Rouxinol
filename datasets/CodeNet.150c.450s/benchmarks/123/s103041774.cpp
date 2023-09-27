#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;
inline int getprime(int x) {
	int i = sqrt(x);
	while (i > 1) {
		if (x % i == 0) return 0;
		else i--;
	}
	return 1;
}
int main() {
	int n;
	cin >> n;
	int x;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		cnt += getprime(x);
	}
	cout << cnt << endl;
	return 0;

}