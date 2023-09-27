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

int main() {
	DICE d;
	cin >> d.top >> d.front >> d.left >> d.right >> d.back >> d.bottom;
	string a;
	cin >> a;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 'S') {
			d.South();
		} else if (a[i] == 'N') {
			d.North();
		} else if (a[i] == 'E') {
			d.East();
		} else {
			d.West();
		}
	}
	cout << d.top << endl;
	return 0;
}