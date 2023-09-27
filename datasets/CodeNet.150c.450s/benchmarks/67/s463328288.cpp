#include <iostream>

using namespace std;

int main()
{
	int n;
	do {
		int sum = 0;
		cin >> n;
		if (n == 0) break;
		for (int i = 2;i < n ;i++) {
			if (i % 2 == 0) {
			   if ((n % (i / 2) == 0) && (((n / i) - (i / 2) + 1) > 0) && (n % i != 0)) {
					sum++;
			   }
			} else if (n % i == 0 && (n / i - (i - 1) / 2 > 0)) {
				sum++;
			}
		}
		cout << sum << endl;
	}while (n != 0) ;
	return 0;
}
