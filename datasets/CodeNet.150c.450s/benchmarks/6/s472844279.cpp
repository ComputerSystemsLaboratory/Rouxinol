#include <iostream>
using namespace std;
int main()
{
	int x[3];
	bool yes = true;
	cin >> x[0];
	for (int i = 1; i < 3; i++)
	{
		cin >> x[i];
		if (x[i - 1] >= x[i])
		{
			yes = false;
		}
	}
	cout << (yes ? "Yes" : "No") << endl;
	return 0;
}
