#include <iostream>

int main(int argc, char const *argv[])
{
	int table[3],temp;
	std::cin >> table[0] >> table[1] >> table[2];

	if (table[0]>table[1]) {
		temp = table[0];
		table[0] = table[1];
		table[1] = temp;
	}
	if (table[1]>table[2]) {
		temp = table[1];
		table[1] = table[2];
		table[2] = temp;
	}
	if (table[0]>table[1]) {
		temp = table[0];
		table[0] = table[1];
		table[1] = temp;
	}

	std::cout << table[0] << " " << table[1] << " " << table[2] << std::endl;

	return 0;
}