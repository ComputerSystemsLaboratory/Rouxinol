#include<iostream>
#include<vector>

int main(){
	int a1, a2, a3, a4, b1, b2, b3, b4;
	while (std::cin >> a1 >> a2 >> a3 >> a4) {
		std::cin >> b1 >> b2 >> b3 >> b4;
		std::vector<int> a = {a1, a2, a3, a4};
		std::vector<int> b = {b1, b2, b3, b4};
		int hit = 0, blow = 0;
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 4; ++j) {
				if (a.at(i) == b.at(j)) {
					if (i == j) {
						++hit;
					} else {
						++blow;
					}
				}
			}
		}
		std::cout << hit << " " << blow << std::endl;

	}
	return 0;
}