#include <iostream>

using namespace std;

int main()
{
	int n, x;

	while (cin >> n >> x, n != 0 || x != 0) {
		int c = 0;
		for (int i = 1; i <= n - 2; i++)
			for (int j = i + 1; j <= n - 1; j++) {
				int k = x - i - j;
				if (j < k)
					k <= n ? c++ : 0;
				else
					break;
			}	
		cout << c << endl;
	}
}