#include<iostream>

int Check(int n, int x);

int main()
{
	while (true) {
		int n, x;

		int count = 0;
		std::cin >> n >> x;
		if (n == 0 && x == 0)
			return 0;

		std::cout << Check(n, x) << std::endl;
	}
}

int Check(int n, int x) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			for (int k = j + 1; k <= n; k++) {
				if (i + j + k == x)
					count++;
			}
		}
	}
	return count;
}