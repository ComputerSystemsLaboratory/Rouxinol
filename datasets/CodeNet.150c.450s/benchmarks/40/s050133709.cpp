#include <iostream>
#include <math.h>
#include <string>
#define MEN 6
#include <iomanip>
using namespace std;


struct DICE
{
	int num;
};

int main()
{
	DICE A[MEN];
	string meirei;
	int i = 0;

	for (int i = 0; i < MEN; i++)
	{
		cin >> A[i].num;
	}

	cin >> meirei;

	while (1)
	{
		if (meirei[i] == '\0')
		{
			break;
		}

		if (meirei[i] == 'N')
		{
			int x = A[0].num;
			A[0].num = A[1].num;
			A[1].num = A[5].num;
			A[5].num = A[4].num;
			A[4].num = x;
		}
		else if (meirei[i] == 'E')
		{
			int x = A[0].num;
			A[0].num = A[3].num;
			A[3].num = A[5].num;
			A[5].num = A[2].num;
			A[2].num = x;
		}
		else if (meirei[i] == 'S')
		{
			int x = A[0].num;
			A[0].num = A[4].num;
			A[4].num = A[5].num;
			A[5].num = A[1].num;
			A[1].num = x;
		}
		else if (meirei[i] == 'W')
		{
			int x = A[0].num;
			A[0].num = A[2].num;
			A[2].num = A[5].num;
			A[5].num = A[3].num;
			A[3].num = x;
		}
		i++;
	}

	cout << A[0].num << endl;

	return 0;
}