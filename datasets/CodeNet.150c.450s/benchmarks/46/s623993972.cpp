#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int n, x;
	int count = 0;	// x???????????°
	while (1)
	{
		cin >> n >> x;
		// ???????????¶
		if (n == 0 && x == 0) {
			break;
		}

		// ??????
		for (int i = 1; i <= n; i++)
		{
			for (int j = i+1; j <= n; j++)
			{
				for (int k = j+1; k <= n; k++)
				{
					//cout << i << "+" << j << "+" << k;
					if (i + j + k == x)
					{
						count++;
						//cout << "???";
					}
					//cout << endl;
				}
			}
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}