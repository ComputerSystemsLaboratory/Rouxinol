#include <cstdio>
#include <algorithm>
using namespace std;

class Dice {
	int num[6];
public:
	void set(int n, int s) {
		num[s] = n;
	}

	void move(char c) {
		if (c == 'E') {
			swap(num[0], num[3]);
			swap(num[3], num[5]);
			swap(num[5], num[2]);
		}
		else if (c == 'N') {
			swap(num[0], num[1]);
			swap(num[1], num[5]);
			swap(num[5], num[4]);
		}
		else if (c == 'S') {
			swap(num[0], num[4]);
			swap(num[4], num[5]);
			swap(num[5], num[1]);
		}
		else if (c == 'W') {
			swap(num[0], num[2]);
			swap(num[2], num[5]);
			swap(num[5], num[3]);
		}
	}

	int up() {
		return num[0];
	}
};

int main() {
	Dice d;
	int n;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &n);
		d.set(n, i);
	}
	getchar();
	char c;
	while (scanf("%c", &c), c != '\n') {
		d.move(c);
	}
	printf("%d\n", d.up());
}