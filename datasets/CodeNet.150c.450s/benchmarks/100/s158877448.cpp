#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	if (n<1) n=1;
	else if (n>20) n=20;
	long long ans=1;
	for (int i=n; i>0; i--) ans *= i;
	cout << ans << endl;
	return 0;
}