#include <iostream>
using namespace std;

#define TOUMAX 4
#define KAIMAX 3
#define ROOMMAX 10

int main(void)
{
	int m,f,r;
	int sum;

	while (1) {
		cin >> m;
		cin >> f;
		cin >> r;

		sum = m+f+r;

		if (sum == -3) {
			break;
		}
		else if ((m != -1) && (f != -1)) {
			sum -= r;

			if (sum >= 80) {
				cout << "A" << endl;
			}
			else if ((sum >= 65) && (sum < 80)) {
				cout << "B" << endl;
			}
			else if ((sum >= 50) && (sum < 65)) {
				cout << "C" << endl;
			}
			else if ((sum >= 30) && (sum < 50)) {
				if (r>= 50) {
					cout << "C" << endl;
				}
				else {
					cout << "D" << endl;
				}
			}
			else {
				cout << "F" << endl;
			}
		}
		else {
			cout << "F" << endl;
		}
	}

	return 0;
}

