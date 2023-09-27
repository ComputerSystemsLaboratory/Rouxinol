#include <iostream>
#include <cmath>
using namespace std;
int n;
int num[10000];

bool isprime(int x) {
	if (x == 2) return true;		//2????´???°
	if (x < 2 || x % 2 == 0) return false;	//????????°
	int i = 3;
	while (i <= (int)sqrt((int)x)) {
		if (x % i == 0) return false;
		i = i + 2;
	}
	return true;
}

int main() {
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> num[i];
	for (int i = 0; i < n; i++) {
		if (isprime(num[i])) ans++;
	}
	cout << ans << endl;
	return 0;
}