#include <iostream>

bool judge_tri(int x1, int x2, int x3);

int main()
{
	int data_num;
	std::cin >> data_num;
	while (data_num >= 1) {
		int x1, x2, x3;
		std::cin >> x1 >> x2 >> x3;
		if (judge_tri(x1, x2, x3)) {
			std::cout << "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}
		data_num--;
	}
	return 0;
}

bool judge_tri(int x1, int x2, int x3)
{
	bool result;
	if (x1 * x1 == x2 * x2 + x3 * x3) {
		result = true;
	} else if (x2 * x2 == x3 * x3 + x1 * x1) {
		result = true;
	} else if (x3 * x3 == x1 * x1 + x2 * x2) {
		result = true;
	} else {
		result = false;
	}
	return result;
}