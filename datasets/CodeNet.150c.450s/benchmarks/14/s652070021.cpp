#include <iostream>
using namespace std;

int main() {
	int n;
	int i = 1;
	int x = 1;
	int mark = 0;

	cin >> n;
		do {
			if(mark == 0)
				x = i;
			if (x % 3 == 0 && mark == 0) {
				cout << " " << i;
				continue;
			}
			else
			{
				do {
					if (x % 10 == 3)
					{
						cout << " " << i;
						mark = 0;
						break;
					}
					x /= 10;
				} while (x);
			}
		} while (++i <= n);


	cout << endl;

	return 0;
}