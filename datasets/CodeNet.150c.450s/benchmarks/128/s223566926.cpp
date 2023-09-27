#include <iostream>
using namespace std;


int main() {
	char a[21] = {0};
	cin.getline(a, 21);
	for (int i = 0; i < 21; i++) {
		if (a[20 - i] == '\0')
			continue;
		cout << a[20 - i];
	}
	cout << endl;
	return 0;
}
