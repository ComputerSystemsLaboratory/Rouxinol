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

	int nD[7] = { 0 };
};
int main()
{
	cD D;
	for (int i = 1; i <= 6; i++)
	{
		cin >> D.nD[i];
	}

	string strInput;
	cin >> strInput;
	for (char e : strInput)
	{
		switch (e)
		{
		case 'E':
			D.E();
			break;
		case 'N':
			D.N();
			break;
		case 'W':
			D.W();
			break;
		case 'S':
			D.S();
			break;
		}
	}
	cout << D.nD[1] << endl;
	//system("pause");
	return 0;
}