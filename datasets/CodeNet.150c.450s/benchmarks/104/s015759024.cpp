#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <sstream>

using hline_t = std::pair<unsigned, unsigned>;

int main(int argc, char const* argv[])
{
	unsigned w, n;
	std::cin >> w >> n ;
	std::vector<hline_t> hlines;
	for (int i = 0; i < n; i++) {
		std::string s;
		hline_t h;
		std::getline(std::cin, s, ',');
		h.first = std::stoi(s);
		std::getline(std::cin, s);
		h.second = std::stoi(s);
		hlines.push_back(h);
	}
	std::vector<unsigned> v(w + 1);
	{
		unsigned n = 0;
		std::generate(v.begin(), v.end(), [&n](){ return n++; });
	}

	for (auto var : hlines) {
		std::swap(v[var.first], v[var.second]);
	}
	std::for_each(v.begin() + 1, v.end(), [&](auto v){ std::cout << v << std::endl; });
	
	return 0;
}