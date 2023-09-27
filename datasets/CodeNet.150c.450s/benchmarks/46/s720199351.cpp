#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	int n, x;
	while (1) {
		int correct = 0;
		cin >> n >> x;
		if (n == 0 && x == 0)
			break;
		for (int i = 1; i <= n - 2; i++)
			for (int j = i + 1; j <= n - 1; j++)
				for (int k = j + 1; k <= n; k++)
					if (i + j + k == x) correct++;

		cout << correct << endl;
	}

	return 0;
}

