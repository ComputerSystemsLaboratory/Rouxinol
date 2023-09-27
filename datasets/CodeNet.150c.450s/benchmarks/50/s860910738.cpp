#include <iostream>
using namespace std;

int main() {
	int data, ans;
	while (1) {
		cin >> data; if (data == 0) break;
		ans = 0; data = 1000 - data;
		while (data >= 500) { data = data - 500; ans++; }
		while (data >= 100) { data = data - 100; ans++; }
		while (data >=  50) { data = data -  50; ans++; }
		while (data >=  10) { data = data -  10; ans++; }
		while (data >=   5) { data = data -   5; ans++; }
		while (data >=   1) { data = data -   1; ans++; }
		cout << ans << endl;
	}
	return 0;
}
