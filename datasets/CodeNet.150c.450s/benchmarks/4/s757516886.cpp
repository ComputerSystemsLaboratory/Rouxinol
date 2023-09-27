#include<iostream>

int main()
{
	int m[100], f[100], r[100];
	int count = 0;

	for (int i = 0; ; i++) {
		std::cin >> m[i] >> f[i] >> r[i];
		count++;
		if (m[i] == -1 && f[i] == -1 && r[i] == -1) {
			count--;
			break;
		}
	}

	for (int i = 0; i < count; i++) {
		if (m[i] == -1 || f[i] == -1)
			std::cout << "F" << std::endl;
		else if (m[i] + f[i] >= 80)
			std::cout << "A" << std::endl;
		else if (m[i] + f[i] < 80 && m[i] + f[i] >= 65)
			std::cout << "B" << std::endl;
		else if (m[i] + f[i] < 65 && m[i] + f[i] >= 50)
			std::cout << "C" << std::endl;
		else if (m[i] + f[i] < 50 && m[i] + f[i] >= 30 && r[i] < 50)
			std::cout << "D" << std::endl;
		else if (m[i] + f[i] < 50 && m[i] + f[i] >= 30 && r[i] >= 50)
			std::cout << "C" << std::endl;
		else if (m[i] + f[i] < 30)
			std::cout << "F" << std::endl;
	}
}