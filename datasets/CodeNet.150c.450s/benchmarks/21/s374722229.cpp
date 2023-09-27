#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int nInput;
	int nOut;

	while (cin >> nInput)
	{
		nOut = pow(nInput, 3);
		cout << nOut << endl;
	}

	return 0;
}