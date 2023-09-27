#include <iostream>
#include <map>
#include <set>

int main()
{
	std::map<int, int> counter;
	int number;
	while (std::cin >> number) {
		counter[number]++;
	}

	int max_count = 0;
	std::set<int> max_numbers;
	for (std::map<int, int>::iterator i = counter.begin(); i != counter.end(); ++i) {
		if (i->second >= max_count) {
			if (i->second > max_count) {
				max_count = i->second;
				max_numbers.clear();
			}
			max_numbers.insert(i->first);
		}
	}

	for (std::set<int>::iterator i = max_numbers.begin(); i != max_numbers.end(); ++i) {
		std::cout << *i << std::endl;
	}

	return 0;
}