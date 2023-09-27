#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> x[i];
	}
	sort(begin(x),end(x));
	cout << x[9] << endl;
	cout << x[8] << endl;
	cout << x[7] << endl;

	return 0;
}
