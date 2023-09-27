#include <iostream>

int search(int n, int x, int a) {
	/*
	 * a < b < c < n
	 * a + b + c == x
	 * b < remain/2 < c
	 */
	int remain = x - a;
	int mid = remain / 2;
	int btomid = mid - a - (remain == mid * 2);
	int midtoc = n - mid;
	//std::cout << "a: " << a << ", mid: " << remain / 2. << ", btomid: " << btomid << ", midtoc: " << midtoc << '\n';
	return std::max(0, std::min(btomid, midtoc));
}

int search(int n, int x) {
	int total = 0;
	int imax = std::min(n - 1, x / 3);
	for (int i = 1; i < imax; i++) {
		total += search(n, x, i);
	}
	return total;
}

int main() {
	int n;
	int x;

	while (true) {
		std::cin >> n >> x;
		if (n == 0 && x == 0) {
			break;
		}
		std::cout << search(n, x) << std::endl;
	}
}