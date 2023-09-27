#include <iostream>
#include <string>

using namespace std;

class DICE {
public:
	int top;
	int bottom;
	int right;
	int left;
	int front;
	int back;
	void South();
	void North();
	void East();
	void West();
	void RF();
	void LF();
};

void DICE::South() {
	int kari = front;
	front = top;
	top = back;
	back = bottom;
	bottom = kari;
}

void DICE::North() {
	int kari = front;
	front = bottom;
	bottom = back;
	back = top;
	top = kari;
}

void DICE::West() {
	int kari = top;
	top = left;
	left = bottom;
	bottom = right;
	right = kari;
}

void DICE::East() {
	int kari = top;
	top = right;
	right = bottom;
	bottom = left;
	left = kari;
}

void DICE::RF() {
	int kari = right;
	right = back;
	back = left;
	left = front;
	front = kari;
}

void DICE::LF() {
	int kari = left;
	left = back;
	back = right;
	right = front;
	front = kari;
}

int main() {
	DICE d;
	cin >> d.top >> d.front >> d.left >> d.right >> d.back >> d.bottom;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t, f;
		cin >> t >> f;
		if (d.top != t) {
			d.South();
			if (d.top != t) {
				d.South();
				if (d.top != t) {
					d.South();
					if (d.top != t) {
						d.East();
						if (d.top != t) {
							d.East();
							d.East();
						}
					}
				}
			}
		}
		if (d.front != f) {
			d.RF();
			if (d.front != f) {
				d.RF();
				if (d.front != f) {
					d.RF();
				}
			}
		}
		cout << d.left << endl;
	}
	return 0;
}