#include <iostream>
#include <cmath>

using namespace std;

bool isprime(unsigned int x)
{
	if (x == 2) return true;

	if (x < 2 || x % 2 == 0)
		return false;

	unsigned int i = 3;
	while (i <= floor(sqrt(x))) {
		if (x % i == 0) {
		  return false;
		}
		i = i + 2;
	}

	return true;
}

int main()
{
	unsigned int n;
	unsigned int ans = 0;
	cin >> n;
	for (unsigned int i = 0; i < n; ++i) {
		unsigned int x;
		cin >> x;
		if (isprime(x)) ++ans;
	}
	cout << ans << endl;
	return 0;
}
 
