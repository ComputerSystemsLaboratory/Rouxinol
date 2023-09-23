#include <iostream>
using namespace std;

bool isContain3(int n) {
	int x = n;
	do {
		if(x % 10 == 3) {
			return true;
		}
		x /= 10;
	} while(x != 0);

	return false;
}

bool isMultipliesOf3(int n) {
	return (n % 3 == 0);
}

int main() {
	int n;
	cin >> n;
	for(int x = 3; x <= n; ++x) {
		if(isContain3(x) || isMultipliesOf3(x)) {
			cout<< " " << x ;
		}
	}
	cout << endl;
	
	return 0;
}