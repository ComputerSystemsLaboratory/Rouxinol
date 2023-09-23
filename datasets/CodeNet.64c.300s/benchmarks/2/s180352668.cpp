#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	while (true)
	{
		int nM, nF, nR;
		cin >> nM >> nF >> nR;
		int nSum = 0;
		nSum = nM + nF;
		if (-1 == nM && -1 == nF && -1 == nR)
		{
			break;
		}
		if (-1 == nM || -1 == nF)
		{
			cout << "F" << endl;
		}
		else if (nSum >= 80)
		{
			cout << "A" << endl;
		}
		else if (nSum >= 65)
		{
			cout << "B" << endl;
		}
		else if (nSum >= 50 || nR >= 50)
		{
			cout << "C" << endl;
		}
		else if (nSum >= 30)
		{
			cout << "D" << endl;
		}
		else
		{
			cout << "F" << endl;
		}
	}

	//system("pause");
	return 0;
}