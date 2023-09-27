#include<iostream>
#include<set>

int sum_comb(std::set<int> c, int n, int s) {
	int sum = 0;
	if (n == 0) {
		if (s == 0) return 1;
		else return 0;
	}

	for (int i = c.size() == 0 ? 9 : (*(c.begin())) - 1; i >= 0; --i) {
		if (i <= s) {
			c.insert(i);
			sum += sum_comb(c, n - 1, s - i);
		}
	}
	return sum;
}

int main() {
	int n, s;
	while (std::cin >> n >> s) {
		if (n == 0 && s == 0) break;
		std::set<int> c;
		std::cout << sum_comb(c, n, s) << std::endl;
	}
	return 0;
}
