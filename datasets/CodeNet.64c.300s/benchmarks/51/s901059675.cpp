#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	long long fac = 1;
	while (--n) {
		fac *= (n+1);
	}
	cout << fac << endl;
}