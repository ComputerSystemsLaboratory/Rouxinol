#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define vec vector

int main(void)
{
    while(1) {
	int e;
	cin >> e;
	if (!e) break;

	int m = e;
	for (int z = 0; z*z*z <= e; z++) {
	    for (int y = 0; y*y + z*z*z <= e; y++) {
		int x = e - z*z*z - y*y;
		int temp = x + y + z;
		if (m > temp) m = temp;
	    }
	}
	cout << m << endl;
    }
    return 0;
}

