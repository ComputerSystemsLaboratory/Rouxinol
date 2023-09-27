#include <iostream>
using namespace std;

int main()
{
	int m = 0, f = 0, r = 0;

	cin >> m >> f >> r;

	while ((m != -1) | (f != -1) | (r != -1)) {
		if ((m == -1) | (f == -1))
			cout << "F" << endl;
		else if (m + f >= 80)
			cout << "A" << endl;
		else if (m + f >= 65)
			cout << "B" << endl;
		else if (m + f >= 50)
			cout << "C" << endl;
		else if (m + f >= 30) {
			if (r >= 50)
				cout << "C" << endl;
			else
				cout << "D" << endl;
		}
		else
			cout << "F" << endl;

		cin >> m >> f >> r;
	}
	
    return 0;
}