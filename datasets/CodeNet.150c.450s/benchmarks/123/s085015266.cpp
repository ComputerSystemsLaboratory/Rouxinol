#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n, num, ans = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		int j = 2;
		if (num == 2 || num == 3) ans++;
		else {
			while (j <= (int)sqrt(num)) {
				
				if ((num % j) == 0) break;
				if (j == (int)sqrt(num)) ans++;
				
				j++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}