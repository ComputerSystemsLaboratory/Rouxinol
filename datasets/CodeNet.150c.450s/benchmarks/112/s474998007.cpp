#include <iostream>
#include <map>

#define INPUT_FROM_FILE (0)

#if INPUT_FROM_FILE
#include <fstream>
#endif

int main(int argc, char **argv) {
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int n = 0;

#if INPUT_FROM_FILE
	if (!ifs.is_open()) {
		std::cout << "can't open" << std::endl;
		exit(0);
	}
	while (ifs >> n, n > 0) {
#else
	while (std::cin >> n, n > 0) {
#endif
		std::map<char, char> conversion_map;

		int m = 0;

		for (int i = 0; i < n; i++) {
			char prev = 0;
			char post = 0;

#if INPUT_FROM_FILE
			ifs >> prev >> post;
#else
			std::cin >> prev >> post;
#endif
			conversion_map[prev] = post;
		}

#if INPUT_FROM_FILE
		ifs >> m;
#else
		std::cin >> m;
#endif

		for (int i = 0; i < m; i++) {
			char c = 0;

#if INPUT_FROM_FILE
			ifs >> c;
#else
			std::cin >> c;
#endif

			if (conversion_map.find(c) != conversion_map.end()) {
				std::cout << conversion_map[c];
			}
			else {
				std::cout << c;
			}
		}
		std::cout << std::endl;
		}
	return 0;
	}