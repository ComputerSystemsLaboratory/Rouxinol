#include <iostream>
using namespace std;

int main() {
	int n, ans;
	cin >> n;

	ans = 100000;
	for(int i=0; i<n; i++) {
		ans *= 1.05;
		if(ans%1000 != 0) ans = (ans/1000+1)*1000;
	}
	cout << ans << endl;
	return 0;
}
