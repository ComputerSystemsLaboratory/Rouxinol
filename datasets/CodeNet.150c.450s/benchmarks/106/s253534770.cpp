#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int nA, nB, nC;
	cin >> nA >> nB >> nC;
	int nCount = 0;
	for (size_t i = nA; i <= nB; i++)
	{
		if (nC%i == 0)
		{
			++nCount;
		}
	}
	printf("%d\n", nCount);

	//system("pause");
	return 0;
}