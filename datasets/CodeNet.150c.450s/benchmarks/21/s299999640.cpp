#include <iostream>
using namespace std;
int main () {
	int x, ans;

	cin >> x ;

	if ((x >= 1) && (x <= 100)) {
		ans = x * x * x;
	    cout << ans << "\n";
	} else {
		cout << "Input number is too large.\n";
	}
	return 0;
}