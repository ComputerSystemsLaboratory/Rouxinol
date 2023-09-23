#include<iostream>
int main(void) {
	std::ios::sync_with_stdio(false);
	int n, COUNT = 0;
	std::cin >> n;
	int x;
	for (int i = 0; i < n; ++i) {
		std::cin >> x;
		if (x == 2) { ++COUNT; }
		else if (x % 2 != 0)
		{
			bool FLUG = false;
			for (int i = 3; i *i <= x; i += 2) {
				if (x%i == 0) {
					FLUG = true;
					break;
				}
			}
			if (FLUG == false) { ++COUNT; }
		}
	}
	std::cout << COUNT << std::endl;
	//system("pause");
	return 0;
}