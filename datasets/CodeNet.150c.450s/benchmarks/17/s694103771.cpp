#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[5];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	sort(a, a + 5);
	for (int j = 4; j > -1; j--) {
		cout << a[j];
		if (j != 0) {
			cout << " ";
		}
		else {
			cout << endl;
		}
	}
	getchar();
	getchar();
	return 0;
}