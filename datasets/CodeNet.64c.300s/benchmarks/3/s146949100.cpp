#include <iostream>
using namespace std;
int main()
{
	int a[100],i,j;
	cin >> i;
	for (j = 0; j < i; j++) {
		cin >> a[j];
	}

	for (j = i - 1; 0 <= j; j--) {
		cout << a[j];
		if (j != 0) {
			cout << ' ';
		}
	}
	cout << endl;
    return 0;
}