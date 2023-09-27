#include <iostream>
#include <vector>

int main()
{
	int data_count = 0;
	while ((std::cin >> data_count) && (data_count > 0)) {
		std::vector<long> dataset;
		for (int i = 0; i < data_count; ++i) {
			int data = 0;
			std::cin >> data;
			dataset.push_back(data);
		}

		long max_sum = dataset[0];
		for (int i = 0; i < data_count; ++i) {
			long current_sum = 0;
			long max_current_sum = dataset[i];
			for (int j = i; j < data_count; ++j) {
				current_sum += dataset[j];
				if (max_current_sum < current_sum) {
					max_current_sum = current_sum;
				}
			}
			if (max_sum < max_current_sum) {
				max_sum = max_current_sum;
			}
		}
		std::cout << max_sum << std::endl;
	}

	return 0;
}