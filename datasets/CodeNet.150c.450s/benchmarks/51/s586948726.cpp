#include <iostream>

using namespace std;

int main() {
	bool f[30] = {0};
	int n;

	while (scanf("%d", &n) != EOF)
		f[n-1] = true;

	for (int i = 0; i < 30; ++i)
		if (!f[i])
			cout << (i + 1) << endl;
}