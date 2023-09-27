#include <iostream>
#define Lint long int
using namespace std;

int main() {
	int n;
	Lint ans = 1;
	cin >> n;
	for (int i = n; i > 0; i--) ans *= i;
	cout << ans << endl;
	return 0;
}
