#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
#include <cstdint>

int main()
{
	typedef std::array<std::uint16_t, 100> DataArray;
	DataArray datas;
	datas.fill(0);

	std::uint16_t max_occurence = 0;
	std::uint16_t num;
	while (std::cin >> num) {
		max_occurence = std::max(max_occurence, ++datas[num - 1]);
	}

	for (DataArray::const_iterator pos =
			std::find(datas.cbegin(), datas.cend(), max_occurence);
		 pos != datas.end();
		 pos = std::find(pos, datas.cend(), max_occurence)) {
			std::cout << std::distance(datas.cbegin(), ++pos) << std::endl;
	}

	return 0;
}