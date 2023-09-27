
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

/*class Dice
{
public:
	int men[7];

	void in(int i)
	{
		for (i; i < 7; i++)
		{
			cin >> men[i];
		}
	}

	void out(int i)
	{
		cout << men[1] << endl;

	}


};*/

int main()
{
	int a, b, c;

	string EWSN;

	int men[7];
	/*Dice a, b, c;

	Dice *info;

	info = new Dice;

	info->in(1);*/

	int j = 0;

	for (int i = 1; i < 7; i++)
	{
		cin >> men[i];
	}

	cin >> EWSN;

	
	for (j = 0; j < EWSN.size();j++){

		if (EWSN[j] == 'E')
		{
			a = men[1];

			men[1] = men[4];

			men[4] = men[6];

			men[6] = men[3];

			men[3] = a;

		}
		else if (EWSN[j] == 'W')
		{
			a = men[1];

			men[1] = men[3];

			men[3] = men[6];

			men[6] = men[4];

			men[4] = a;
		}
		else if (EWSN[j] == 'S')
		{
			a = men[1];

			men[1] = men[5];

			men[5] = men[6];

			men[6] = men[2];

			men[2] = a;
		}
		else if (EWSN[j] == 'N')
		{
			a = men[1];

			men[1] = men[2];

			men[2] = men[6];

			men[6] = men[5];

			men[5] = a;
		}

	}


	/*info->out(1);

	delete info;*/

	cout << men[1] << endl;

	return 0;
}