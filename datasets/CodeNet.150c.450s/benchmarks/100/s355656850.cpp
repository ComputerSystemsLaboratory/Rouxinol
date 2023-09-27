#include <iostream>
using namespace std;

int main() {
	int n;
	long long ans = 1;
	
	cin >> n;
	while(n) {
		ans *= n;
		n--;
	}
	cout << ans << endl;
}