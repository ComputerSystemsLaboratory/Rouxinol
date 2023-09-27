#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	
	int n = 1;
	std::cin >> n;


	while (n)
	{
		std::vector<int32_t> num_list{};

		while (n--)
		{
			int tmp = 0;
			std::cin >> tmp;
			num_list.push_back(tmp);
		}
		int32_t max_num = *(num_list.begin());
		std::vector<int32_t> sum_list{};
		for( auto num : num_list )
		{
			for (auto& sum : sum_list)
			{
				sum += num;
			}
			sum_list.push_back(num);

			int32_t tmp_max_sum = *(std::max_element(sum_list.begin(), sum_list.end()));
			if (max_num < tmp_max_sum)
			{
				max_num = tmp_max_sum;
			}
		}

		std::cout << max_num << std::endl;
	
		std::cin >> n;
	}

	return 0;
}