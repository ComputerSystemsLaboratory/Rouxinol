#include<iostream>
#include<vector>
#include<string>
int main() {
	int n,m;
	std::string y;
	std::vector<std::string> s;
	while (true)
	{
		std::cin >> n;
		if (n == 0) {
			break;
		}
		std::string a;
		std::vector<std::string>j(n), k(n);
		for (int l = 0; l < n; ++l) {
			std::cin >> j[l] >> k[l];
		}
			std::cin >> m;
			for (int i = 0; i < m; ++i) {
				std::cin >> y;
				for (int l = 0; l < n; ++l) {
					if (y == j[l]) {
						a += k[l];
							break;
					}
					if(l+1==n)a += y;
				}
			}
		j.clear();
		k.clear();
		s.push_back(a);
	}
	for (int i = 0; i < s.size(); ++i) {
		std::cout << s[i]<<std::endl;
	}
	return 0;
}