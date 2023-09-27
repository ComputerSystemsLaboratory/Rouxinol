#include<iostream>
#include<vector>
#include<algorithm>

int color(std::vector<std::vector<int> > v) {
	std::vector<int> color(v.size(), 0);
	int count = 0, color_count = 1;
	for (int i = 0; i <= 2000; i++) {
		for (size_t j = 0; j < v.size(); j++) {
			for (size_t k = j + 1; k < v.size(); k++) {
				if (v[j][k] == i && ((color[k] == 0 || color[j] == 0) || (color[k] != color[j]))) {
					if (color[k] == 0) {
						if (color[j] != 0) {
							color[k] = color[j];
						} else {
							color[k] = color[j] = color_count;
							color_count++;
						}
					} else {
						if (color[j] == 0) {
							color[j] = color[k];
						} else {
							int num = color[j];
							std::replace(color.begin(), color.end(), num, color[k]);
						}
					}
					count += i;
				}
			}
		}
	}
	return count;
}

int main() {
	int num;
	std::cin >> num;

	std::vector<std::vector<int> > v(num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			int n;
			std::cin >> n;
			v[i].push_back(n);
		}
	}

	std::cout << color(v) << std::endl;

	return 0;
}