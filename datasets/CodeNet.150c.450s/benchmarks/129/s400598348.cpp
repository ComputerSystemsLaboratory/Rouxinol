#include <iostream>
#define MAX 100
using namespace std;


int main()
{
	//??????????????°?????£?¨?
	int intable[MAX][MAX];
	int yoko[MAX];
	int tate[MAX];
	for (int i = 0; i < MAX; i++)
	{
		yoko[i] = 0;
		tate[i] = 0;
	}

	//??¨????????°??¨?????°??\???
	int r, c;
	cin >> r >> c;
	
	//??¨??????????????\????¨?????????°????¨????
	for (int i1 = 0; i1 < r; i1++)
	{
		for (int i2 = 0; i2 < c; i2++)
		{
			cin >> intable[i1][i2];
			yoko[i1] = yoko[i1] + intable[i1][i2];
		}
		i1;
	}

	//??\????????¨?¨????????¨??????????
	for (int i1 = 0; i1 < r; i1++)
	{
		for (int i2 = 0; i2 < c; i2++)
		{
			cout << intable[i1][i2] << ' ';
		}
		cout << yoko[i1] << endl;
	}

	//??????????¨?????¨?????????????
	for (int i1 = 0; i1 < c; i1++)
	{
		for (int i2 = 0; i2 < r; i2++)
		{
			tate[i1] = tate[i1] + intable[i2][i1];
		}
		cout << tate[i1] << ' ';
	}

	//????¨?????¨?????????????
	int sum = 0;
	for (int i = 0; i < r; i++)
	{
		sum = sum + yoko[i];
	}
	cout << sum << endl;

	return 0;
}