#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	int a, b, c;
	int count = 0;
	list<int> numberlist;

	cin >> a >> b >> c;

	for (int k = a; k <= b; k++) {
		if (c % k == 0) {
			count++;
		}
	}

	cout << count << endl;
}