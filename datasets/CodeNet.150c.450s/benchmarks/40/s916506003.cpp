#include <iostream>
#include <string>
using namespace std;

int main()
{
	int u = 0, a[6] = {0}, temp = 0;
	string mov;

	for (int i = 0; i < 6; i++)
		cin >> a[i];

	cin >> mov;

	for (unsigned int j = 0; j < mov.size(); j++) {
		switch (mov[j]) {
			case 'E':
				temp = a[0];
				a[0] = a[3];
				a[3] = a[5];
				a[5] = a[2];
				a[2] = temp;
				break;

			case 'W':
				temp = a[0];
				a[0] = a[2];
				a[2] = a[5];
				a[5] = a[3];
				a[3] = temp;
				break;

			case 'S':
				temp = a[0];
				a[0] = a[4];
				a[4] = a[5];
				a[5] = a[1];
				a[1] = temp;
				break;

			case 'N':
				temp = a[0];
				a[0] = a[1];
				a[1] = a[5];
				a[5] = a[4];
				a[4] = temp;
				break;
		}
	}

	cout << a[0] << endl;

    return 0;
}