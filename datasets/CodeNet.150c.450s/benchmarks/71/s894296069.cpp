#include <iostream>

void calc(int i, int n, int& cnt) {
	if (n==0) {
		cnt++;
		return;
	}
	if (i>=4) {
		return;
	}
	int max = n < 9 ? n : 9;
	for (int j=0; j<=max; j++) {
		calc(i+1, n-j, cnt);
	}
}

int main() {
	int n, cnt;
	while (std::cin >> n) {
		cnt = 0;
		calc(0, n, cnt);
		std::cout << cnt << std::endl;
	}
	return 0;
}
