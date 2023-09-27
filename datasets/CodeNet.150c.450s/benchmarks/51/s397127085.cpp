#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	bool f[30];

	memset(f, 0, sizeof(f));

	for (int i = 0; i < 28; i++) {
		int n;
		cin >> n;
		f[n - 1] = 1;
	}

	for (int i = 0; i < 30; i++) {
		if (!f[i])
			cout << i + 1 << endl;
	}

	return 0;
}
