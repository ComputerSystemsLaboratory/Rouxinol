#include<iostream>
using namespace std;

int main() {
	unsigned long int x, ans=1;
	cin >> x;
	for (int i = 2; i <= x; i++) {
		ans *= i;
	}
	cout << ans<<endl;
}