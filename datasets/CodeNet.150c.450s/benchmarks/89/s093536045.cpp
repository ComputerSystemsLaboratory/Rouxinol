#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int x)
{
	if(x < 2) return false;

	for(int i = 2; i * i <= x; ++i) {
		if(x % i == 0) return false;
	}

	return true;
}

int main()
{
	while(true) {
		int a, d, n;
		cin >> a >> d >> n;
		if(a == 0 && d == 0 && n == 0) break;
			
		int cnt = 0;

		for(int i = a; ; i += d) {
			if(is_prime(i)) {
				cnt++;

				if(cnt == n) {
					cout << i << endl;
					break;
				}
			}
		}
	}
}