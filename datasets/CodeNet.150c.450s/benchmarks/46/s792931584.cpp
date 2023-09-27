#include <iostream>
using namespace std;

int main() {
	
	while (1) {
		int n, x;
		int way = 0;
		cin >> n >> x;

		if (!n && !x)
			break;

		for (int i = 1; i <= n-2; i++)
		{
			for (int j = i + 1; j <= n - 1; j++)
				for (int a = j + 1; a <= n; a++)
					if (a + j + i == x)
						way++;
		}

		cout << way << endl;
	}
}