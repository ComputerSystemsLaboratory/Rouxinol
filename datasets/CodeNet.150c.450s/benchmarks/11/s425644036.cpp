#include <iostream>
using namespace std;

int main()
{
	int n, crd[4][13] = {}, num;
	char mrk;

	cin >> n;

	for (n; n > 0; n--) {
		cin >> mrk >> num;

		if (mrk == 'S') crd[0][num - 1] = 1;
		else if (mrk == 'H') crd[1][num - 1] = 1;
		else if (mrk == 'C') crd[2][num - 1] = 1;
		else if (mrk == 'D') crd[3][num - 1] = 1;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (crd[i][j] == 0) {
				if (i == 0) cout << "S " << j + 1 << endl;
				else if (i == 1) cout << "H " << j + 1 << endl;
				else if (i == 2) cout << "C " << j + 1 << endl;
				else if (i == 3) cout << "D " << j + 1 << endl;
			}
		}
	}

	return 0;
}