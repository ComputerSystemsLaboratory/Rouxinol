#include <stdio.h>
#include <vector>

int main() {
	int n;
	std::vector<int> d;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int b;
		scanf("%d", &b);
		d.push_back(b);
	}
	
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (d[j] < d[j - 1]) {
				std::swap(d[j], d[j - 1]);
				cnt++;
			}
		}
	}

	for (auto v = d.begin(); v != d.end(); v++) {
		printf("%d%c", *v, (d.end() - v == 1) ? '\n' : ' ');
	}
	printf("%d\n", cnt);
}