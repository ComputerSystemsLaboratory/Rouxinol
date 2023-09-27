#include <iostream>
using namespace std;
struct Dice {
	int V[6];
	void role(char c) {
		int a;
		if (c == 'E') {
			a = V[0];
			V[0] = V[3];
			V[3] = V[5];
			V[5] = V[2];
			V[2] = a;
		}
		if (c == 'N') {
			a = V[0];
			V[0] = V[1];
			V[1] = V[5];
			V[5] = V[4];
			V[4] = a;
		}
		if (c == 'S') {
			a = V[0];
			V[0] = V[4];
			V[4] = V[5];
			V[5] = V[1];
			V[1] = a;
		}
		if (c == 'W') {
			a = V[0];
			V[0] = V[2];
			V[2] = V[5];
			V[5] = V[3];
			V[3] = a;
		}
		if (c == 'R') {
			a = V[1];
			V[1] = V[2];
			V[2] = V[4];
			V[4] = V[3];
			V[3] = a;
		}
	}
	int top() {
		return V[0];
	}
	int right() {
		return V[2];
	}
	int left() {
		return V[3];
	}
	int front() {
		return V[1];
	}
	int back() {
		return V[4];
	}
	int bottom() {
		return V[5];
	}
};

int main() {
	Dice d;
	for (int i = 0; i < 6; i++)
		cin >> d.V[i];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (d.left() == x)
			d.role('E');
		if (d.right() == x)
			d.role('W');
		while (d.top() != x)
			d.role('S');
		while (d.front() != y)
			d.role('R');
		cout << d.right() << endl;
	}
}
