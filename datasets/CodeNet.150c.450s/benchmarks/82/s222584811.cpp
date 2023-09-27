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

	void move_up(int n) {
		for (int i = 0; up() != n && i < 4; i++)
			move('E');
		for (int i = 0; up() != n && i < 4; i++)
			move('N');
	}

	int up_front_to_right(int n, int m) {
		move_up(n);
		if (num[1] == m) {
			return num[2];
		}
		else if (num[2] == m) {
			return num[4];
		}
		else if (num[3] == m) {
			return num[1];
		}
		else {
			return num[3];
		}
	}
};

int main() {
	Dice d;
	int n;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &n);
		d.set(n, i);
	}
	int m, a, b;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", d.up_front_to_right(a, b));
	}
}