#include <iostream>
using namespace std;

using ULLint = unsigned long long int;

int main() {
	ULLint ans = 1; int n; cin >> n;
	for (int i = n; i > 0; i--) ans = ans * i;
	cout << ans << endl;
	return 0;
}
