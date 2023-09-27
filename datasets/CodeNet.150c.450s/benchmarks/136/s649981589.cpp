#include <iostream>
using namespace std;
int main() {
	long long int a, b, m, n, tmp;
	while(cin >> a >> b) {
		if(a > b) {
			m = a;
			n = b;
		} else {
			m = b;
			n = a;
		}
		while(n != 0) {
			tmp = n;
			n = m % n;
			m = tmp;
		}
		tmp = a * b / m;
		cout << m << " " << tmp << endl;
	}
	return 0;
}