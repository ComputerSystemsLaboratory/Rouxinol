#include <iostream>

int main()
{
	int n, x;
	while (std::cin >> n >> x) {
		int nSum = 0;
		if (n == 0 && x == 0) {
			break;
		}
		else {
			for (int i = 1;i < n;i++) {
				for (int j = i + 1;j < x - 1;j++) {
					int k = x - j - i;
					if (k > j&&k <= n) {
						nSum += 1;
					}
					else {
						nSum += 0;
					}
				}
			}
		}
		std::cout << nSum << std::endl;
	}
    return 0;
}