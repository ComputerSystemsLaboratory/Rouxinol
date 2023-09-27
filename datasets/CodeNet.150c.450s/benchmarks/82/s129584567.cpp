#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
#include <map>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

struct Dice {
	int top, front, right, left, back, bottom;

	void toN() {
		swap(top, front);
		swap(front, bottom);
		swap(bottom, back);
	}

	void toS() {
		swap(top, back);
		swap(back, bottom);
		swap(bottom, front);
	}

	void toE() {
		swap(top, left);
		swap(left, bottom);
		swap(bottom, right);
	}

	void toW() {
		swap(top, right);
		swap(right, bottom);
		swap(bottom, left);
	}

	bool rotateTo(int toTop, int toFront) {
		if (top == toFront) {
			toS();
		} else if (front == toFront) {
			// noop
		} else if (right == toFront) {
			toW();
			toS();
		} else if (left == toFront) {
			toE();
			toS();
		} else if (back == toFront) {
			toS();
			toS();
		} else if (bottom == toFront) {
			toN();
		} else {
			return false;
		}
		if (top == toTop) {
			// noop
		} else if (right == toTop) {
			toW();
		} else if (left == toTop) {
			toE();
		} else if (back == toTop) {
			return false;
		} else if (bottom == toTop) {
			toE();
			toE();
		} else {
			return false;
		}
		return true;
	}
};

istream& operator>>(istream& in, Dice& dice) {
	in >> dice.top >> dice.front >> dice.right
		>> dice.left >> dice.back >> dice.bottom;
	return in;
}

int main() {

	Dice dice;
	cin >> dice;

	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		int t, f;
		cin >> t >> f;
		dice.rotateTo(t, f);
		cout << dice.right << endl;
	}

	return 0;
}

