
#include <iostream>

#include <vector>


void execute() {
	int n = 0;
	std::cin >> n;

	std::vector<int> ary;
	for (int i = 0; i < n; ++i) {
		int num = 0;
		std::cin >> num;
		ary.push_back(num);
	}


	for (int i = 0, end=ary.size(); i < end; ++i) {
		int j = 0;
		while (j < i) {
			if (ary[i] < ary[j]) {
				int tmp = ary[i];
				for (int k = i - 1; k >= j; --k) {
					ary[k + 1] = ary[k];
				}
				ary[j] = tmp;
				break;
			}
			++j;
		}
		for (int l = 0; l < end - 1; ++l) {
			std::cout << ary[l] << " ";
		}
		std::cout << ary[ary.size() - 1] << std::endl;
	}
}

int main() {
	execute();
	return 0;
}