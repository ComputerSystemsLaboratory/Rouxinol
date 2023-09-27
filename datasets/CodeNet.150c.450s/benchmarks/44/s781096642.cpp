#include <iostream>
#include <cmath>
#include <vector>

const int data_count = 4;

bool read_dataset(std::istream& input, int* a, int* b)
{
	for (int i = 0; i < data_count; ++i) {
		input >> a[i];
	}
	for (int i = 0; i < data_count; ++i) {
		input >> b[i];
	}
	return input.good();
}

int main()
{
	int a[data_count], b[data_count];
	while (read_dataset(std::cin, a, b)) {
		int hit_count = 0;
		int blow_count = 0;
		for (int ia = 0; ia < data_count; ++ia) {
			for (int ib = 0; ib < data_count; ++ib) {
				if (a[ia] == b[ib]) {
					if (ia == ib) {
						++hit_count;
					} else {
						++blow_count;
					}
				}
			}
		}
		std::cout << hit_count << ' ' << blow_count << std::endl;
	}

	return 0;
}