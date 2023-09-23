#include <iostream>

using namespace std;
 

int main()
{ 
	int n;
	cin >> n;

	int debt = 100000;
	for (int i = 0; i < n; ++i)
	{
		debt *= 1.05;
		if (debt % 1000 > 0) debt += 1000;
		debt /= 1000, debt *= 1000;
	}

	cout << debt << endl;

	return 0;
}