#include <iostream>
using namespace std;

struct dice {
	int back, bottom, front, left, right, top;
};

int main() {
	dice a;
	cin >> a.top >> a.front >> a.right >> a.left >> a.back >> a.bottom;
	int q, b, c;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> b >> c;
		if (a.bottom == b && a.left == c || a.left == b && a.top == c || a.right == b && a.bottom == c || a.top == b && a.right == c) cout << a.back;
		else if (a.back == b && a.right == c || a.front == b && a.left == c || a.left == b && a.back == c || a.right == b && a.front == c) cout << a.bottom;
		else if (a.bottom == b && a.right == c || a.left == b && a.bottom == c || a.right == b && a.top == c || a.top == b && a.left == c) cout << a.front;
		else if (a.back == b && a.bottom == c || a.bottom == b && a.front == c || a.front == b && a.top == c || a.top == b && a.back == c) cout << a.left;
		else if (a.back == b && a.top == c || a.bottom == b && a.back == c || a.front == b && a.bottom == c || a.top == b && a.front == c) cout << a.right;
		else cout << a.top;
		cout << endl;
	}
}
