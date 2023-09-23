#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int nInput1, nInput2, nInput3;

	while (cin >> nInput1 >> nInput2 >> nInput3)
	{
		if ((nInput1 < nInput2) && (nInput2 < nInput3))
		{
			cout << "Yes"<< endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}

	return 0;
}