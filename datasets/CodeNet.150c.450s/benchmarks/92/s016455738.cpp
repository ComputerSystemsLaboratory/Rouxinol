#include <iostream>
using namespace std;

int main() {
	int a, b;
	while(cin >> a >> b) {
		int sum = a + b;
		int ans = 1;
		while((sum /= 10) >= 1) ans++;
		cout << ans << endl;
	}
	return 0;
}