#include <iostream>
#include <string>
#include <array>
#include <numeric>
#include <cstdint>

int main()
{
	typedef std::array<std::uint16_t, 12> NumDays;
	NumDays const num_days = {
		0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30
	};
	typedef std::array<std::string, 7> WeekDay;
	WeekDay const days = {
		"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"
	};

	std::uint16_t m, d;
	for (std::cin >> m >> d; !(m == 0 && d == 0); std::cin >> m >> d) {
		std::uint16_t const num_spanned_days =
			d + std::accumulate(num_days.begin(), num_days.begin() + m, 0);
		std::cout << days[num_spanned_days % days.size()] << std::endl;
	}

	return 0;
}