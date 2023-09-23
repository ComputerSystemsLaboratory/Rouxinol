#include "iostream"
using namespace std;

int main() {
	int m, f, r = 0;
	bool flag = true;

	while (flag == true) {
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1) flag = false;
		else {
			if (m == -1 || f == -1) cout << "F";
			else if (m + f >= 80) cout << "A";
			else if (m + f >= 65)cout << "B";
			else if (m + f >= 50) cout << "C";
			else if (m + f >= 30 && r >= 50) cout << "C";
			else if (m + f >= 30)cout << "D";
			else cout << "F";
			
			cout << endl;
		}
	}
}