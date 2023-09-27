#include <iostream>
#include <string>
using namespace std;

class cD
{
public:
	void N()
	{
		int nTemp = 0;
		nTemp = nD[1];
		nD[1] = nD[2];
		nD[2] = nD[6];
		nD[6] = nD[5];
		nD[5] = nTemp;
	}

	void S()
	{
		int nTemp = 0;
		nTemp = nD[1];
		nD[1] = nD[5];
		nD[5] = nD[6];
		nD[6] = nD[2];
		nD[2] = nTemp;
	}

	void W()
	{
		int nTemp = 0;
		nTemp = nD[1];
		nD[1] = nD[3];
		nD[3] = nD[6];
		nD[6] = nD[4];
		nD[4] = nTemp;
	}

	void E()
	{
		int nTemp = 0;
		nTemp = nD[1];
		nD[1] = nD[4];
		nD[4] = nD[6];
		nD[6] = nD[3];
		nD[3] = nTemp;
	}

	void Rotate()
	{
		int nTemp = 0;
		nTemp = nD[2];
		nD[2] = nD[3];
		nD[3] = nD[5];
		nD[5] = nD[4];
		nD[4] = nTemp;
	}

	int nD[7] = { 0 };
};
int main()
{
	cD D;
	for (int i = 1; i <= 6; i++)
	{
		cin >> D.nD[i];
	}
	int nCount;
	cin >> nCount;
	for (int i = 0; i < nCount; i++)
	{
		int nT, nF;
		cin >> nT >> nF;
		for (int j = 1; j <= 6; j++)
		{
			if (nT == D.nD[j])
			{
				if (1 == j)
				{
					break;
				}
				else if (2 == j)
				{
					D.N();
				}
				else if (3 == j)
				{
					D.W();
				}
				else if (4 == j)
				{
					D.E();
				}
				else if (5 == j)
				{
					D.S();
				}
				else
				{
					D.S();
					D.S();
				}
			}
		}

		while (D.nD[2] != nF)
		{
			D.Rotate();
		}
		cout << D.nD[3] << endl;
	}

	//system("pause");
	return 0;
}