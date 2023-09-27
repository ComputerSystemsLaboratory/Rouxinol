#include <iostream>
using namespace std;

int main() {
	auto count = 0;
	while(1) {
		int a;
		cin >> a;
		if (a == 0) break;
		cout << "Case " << ++count << ": " << a << endl;
	}
}