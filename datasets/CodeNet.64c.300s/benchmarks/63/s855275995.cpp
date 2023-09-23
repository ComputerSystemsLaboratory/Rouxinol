#include <iostream>

using namespace std;

void solve(long long a, long long b) {
	long long num = a * b;
	while (a != b) {
		if (a > b) {
			a -= b;
		}else if(b > a){
			b -= a;
		}

		if (a == b) {
			break;
		}
	}
	cout << a << " " << num / a << endl;
}

int main() {
	long long a, b;
	while (cin >> a >> b) {
		solve(a, b);
	}
	return 0;
}