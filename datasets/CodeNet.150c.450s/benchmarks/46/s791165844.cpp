#include <iostream>
using namespace std;

int main()
{
	int n = 0, x = 0;

	cin >> n >> x;

	while ((n != 0) | (x != 0)) {
		int t = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++)
					if ((i + j + k) == x)
						t++;
			}
		}
		cout << t << endl;

		cin >> n >> x;
	}
	
    return 0;
}