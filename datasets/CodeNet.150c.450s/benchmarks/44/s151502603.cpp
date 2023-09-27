#include <iostream>
int main()
{
	int n;
	while (std::cin>>n) {
		int a[4], b[4];
		a[0] = n;
		int eat = 0, bite = 0;
		for (int i = 1; i < 4; i++) {
			std::cin >> a[i];
		}
		for (int i = 0; i < 4; i++) {
			std::cin >> b[i];
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (i == j&&a[i] == b[j]) {
					eat++;
				}
				else if (a[i] == b[j]) {
					bite++;
				}
			}
		}
		std::cout << eat << " " << bite << std::endl;
	}
	return 0;
}