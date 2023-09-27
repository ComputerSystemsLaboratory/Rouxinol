#include "iostream"
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (size_t z = 1; z <= n; z++)
	{
		int i = z;
		if (i % 3 == 0) {
			cout << " " << i;
		}
		else {
			do {
				if (i % 10 == 3) {
					cout << " " <<z;
					break;
				}
			} while (i /= 10);
		}
	}
	cout << endl;
	return 0;
}