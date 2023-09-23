#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int mode[100];
	int a, v = 0;

	memset(mode, 0, sizeof(mode));
	while (cin >> a) {
		mode[a-1] += 1;
	}
	for (int i = 0; i < 100; i++)
		v = max(v, mode[i]);
	for (int i = 0; i < 100; i++)
		if (mode[i] == v)
			cout << i+1 << endl;
	return 0;
}