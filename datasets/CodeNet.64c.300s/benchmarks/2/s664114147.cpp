#include <iostream>
#include <string>
using namespace std;

int main() {
	int m[200], f[200], r[200];
	int x, y, z, i = 0;

	while(1){
		cin >> x >> y >> z;
		if (x == -1 && y == -1 && z == -1) break;
		else {
			m[i] = x;
			f[i] = y;
			r[i] = z;
		}
		i++;
	}

	for (int j = 0; j < i; j++) {
		if (m[j] == -1 || f[j] == -1) cout << "F" << endl;
		else if (m[j] + f[j] >= 80) cout << "A" << endl;
		else if (m[j] + f[j] < 80 && m[j] + f[j] >= 65) cout << "B" << endl;
		else if (m[j] + f[j] < 65 && m[j] + f[j] >= 50) cout << "C" << endl;
		else if (m[j] + f[j] < 50 && m[j] + f[j] >= 30) {
			if (r[j] >= 50) cout << "C" << endl;
			else cout << "D" << endl;
		}
		else if (m[j] + f[j] < 30) cout << "F" << endl;
	}
	return 0;
}