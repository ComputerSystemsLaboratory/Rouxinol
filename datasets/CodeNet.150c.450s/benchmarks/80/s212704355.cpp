#include <iostream>
using namespace std;
int main()
{
	int a[4], b[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	cin >> b[0] >> b[1] >> b[2] >> b[3];
	if (a[0] + a[1] + a[2] + a[3] >= b[0] + b[1] + b[2] + b[3])
		cout << a[0] + a[1] + a[2] + a[3] << endl;
	else
		cout << b[0] + b[1] + b[2] + b[3] << endl;
	return 0;
}