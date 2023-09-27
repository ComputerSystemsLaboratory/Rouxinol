#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool b[33000];
int main() {	
	int n;
	while (cin >> n&&n) {
		int a=10000000, b=-100,x;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			sum += x;
			a = min(a, x);
			b = max(b, x);
		}
		sum -= a;
		sum -= b;
		double c = floor((double)sum / (double)(n - 2));
		cout << c << endl;
	}
}