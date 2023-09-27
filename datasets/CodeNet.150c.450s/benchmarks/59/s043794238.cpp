#include <vector>
#include <iostream>

int main() {
	int n;

	std::cin >> n;
	std::vector<int> d;

	for (int i = 0; i < n; i++) {
		int in;
		std::cin >> in;
		d.push_back(in);
	}

	for (int i = 1; i < d.size(); i++) {
		int key = d[i];

		//???????????¨???
		for (int i = 0; i < d.size(); i++) {
			printf("%d%c", d[i], (i == d.size() - 1)? '\n': ' ');
		}
		

		int j = i - 1;
		while (j >= 0 && d[j] > key) {
			d[j + 1] = d[j];
			j--;
		}
		d[j + 1] = key;
	}

	//???????????¨???
	for (int i = 0; i < d.size(); i++) {
		printf("%d%c", d[i], (i == d.size() - 1) ? '\n' : ' ');
	}

	return 0;
}