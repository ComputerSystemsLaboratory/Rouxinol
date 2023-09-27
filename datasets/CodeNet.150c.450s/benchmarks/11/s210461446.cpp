#include <iostream>
#include <array>
#include <map>

int main(int argc, char const* argv[])
{
	int n;
	std::map<char,std::array<bool,13>> card;
	std::array<char,4> marks{'S','H','C','D'};

	for (auto&& m : marks) {
		for (int i = 0; i < 13; i++) {
			card[m][i] = true;
		}
	}

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		char mark;
		int rank;
		std::cin >> mark >> rank;
		card[mark][rank-1] = false;
	}
	for (auto&& m : marks) {
		for (int i = 0; i < 13; i++) {
			if (card[m][i])
				std::cout << m << " " << i+1 << std::endl;
		}
	}
	return 0;
}