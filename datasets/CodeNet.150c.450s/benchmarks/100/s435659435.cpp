#include <iostream>

using namespace std;

int main() {
	int n;
	unsigned long long int re = 1;
	
	cin >> n;
	while(n >= 2) {
		re *= n;
		n--;
	}
	
	cout << re << endl;
	
	return 0;
	
}