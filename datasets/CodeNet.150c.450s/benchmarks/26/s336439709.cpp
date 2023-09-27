#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int nInput1, nInput2;

	while (cin >> nInput1 >> nInput2)
	{
		if (nInput1>nInput2)
		{
			cout << "a > b" << endl;
		}
		else if (nInput1==nInput2)
		{
			cout << "a == b" << endl;
		}
		else
		{
			cout << "a < b" << endl;
		}
	}

	return 0;
}