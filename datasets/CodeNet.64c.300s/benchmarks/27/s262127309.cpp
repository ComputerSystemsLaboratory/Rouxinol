#include "iostream"
#include "string"

int main()
{
	int n, x;
	int val = 0;

	while (true) {
		std::cin >> n >> x;
		if ((n + x) == 0)
			break;

		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					if ((i + j + k) == x)
						val++;
				}
			}
		}
		std::cout << val << std::endl;
		val = 0;
	}
    return 0;
}