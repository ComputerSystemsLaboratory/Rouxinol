#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long n, a, b;
	cin >> n;
	b = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		for (int j = 2; j*j <= a;j++) {
			if (a%j == 0) {
				b++;
				break;
			}
		}
	}
	cout << n - b << endl;
	return 0;
}