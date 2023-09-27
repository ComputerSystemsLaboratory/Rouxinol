#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> day_of_week{
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday",
		"Monday",
		"Tuesday",
		"Wednesday"
	};

	std::vector<int> day_num_of_month{
		31,
		29,
		31,
		30,
		31,
		30,
		31,
		31,
		30,
		31,
		30,
		31
	};

	int month = 0;
	int day = 0;

	while (std::cin >> month >> day)
	{
		if (0 == month) { break; }

		int days_elapsed = 0;
		for (int m = 1; m < month; ++m)
		{
			days_elapsed += day_num_of_month[m - 1];
		}
		days_elapsed += day;

		std::cout << day_of_week[(days_elapsed - 1) % 7] << std::endl;
	}

	return 0;
}