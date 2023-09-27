#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;


int main()
{
	int a[10];
	for (int s=0; s <= 9; s++)
	{
		cin >> a[s];
	}
	sort(a, a + 10, greater<int>());
	cout << a[0] << endl << a[1] << endl << a[2] << endl;
	return 0;
}