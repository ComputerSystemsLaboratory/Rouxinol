#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	unordered_set<int> a;
	for (int i = 0; i < 28; ++i) {
		int b;
		cin >> b;
		a.insert(b);
	}
	for (int i = 1; i <= 30; ++i) {
		if (!a.count(i)) cout << i << endl;
	}
}
