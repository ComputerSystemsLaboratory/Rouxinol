#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

int main() {
	std::string W;
	std::string T;
	int count = 0;
	std::cin >> W;
	while (std::cin >> T) {
		if (T == "END_OF_TEXT") {
			break;
		}
		else {
			transform(W.begin(), W.end(), W.begin(), tolower);
			transform(T.begin(), T.end(), T.begin(), tolower);
			if (T == W) {
				count++;
			}
		}

	}
	std::cout << count << std::endl;
}