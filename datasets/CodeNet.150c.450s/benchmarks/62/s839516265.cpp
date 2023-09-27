#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const* argv[])
{
	std::vector<int> d;
	int a,b,c;
	std::cin >> a >> b >> c;
	d.push_back(a);
	d.push_back(b);
	d.push_back(c);
	std::sort(d.begin(), d.end());
	for (size_t i = 0; i < d.size(); i++) {
		if (i!=0) {
			std::cout << " ";
		}
		std::cout << d[i];
	}
	std::cout << std::endl;
	return 0;
}