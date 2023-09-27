#include <iostream>
#include <string>
#include<vector>

int main() {
	int N; std::cin >> N;
	std::vector<std::string> S(N);
	int ac{ 0 };
	int wa{ 0 };
	int tle{ 0 };
	int re{ 0 };
	for (auto& r : S) {
		std::cin >> r;
		if (r == "AC")
			++ac;
		else if (r == "WA")
			++wa;
		else if (r == "TLE")
			++tle;
		else
			++re;
	}
	std::cout << "AC x " << ac << std::endl;
	std::cout << "WA x " << wa << std::endl;
	std::cout << "TLE x " << tle << std::endl;
	std::cout << "RE x " << re << std::endl;

	return 0;
}
