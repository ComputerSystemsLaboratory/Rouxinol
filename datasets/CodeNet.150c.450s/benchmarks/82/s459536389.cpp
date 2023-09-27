#include<iostream>
using namespace std;
void moveE(int dice[6])
{
	int tmp = dice[0];
	dice[0] = dice[3];
	dice[3] = dice[5];
	dice[5] = dice[2];
	dice[2] = tmp;
}
void moveN(int dice[6])
{
	int tmp = dice[0];
	dice[0] = dice[1];
	dice[1] = dice[5];
	dice[5] = dice[4];
	dice[4] = tmp;
}
void moveS(int dice[6])
{
	int tmp = dice[0];
	dice[0] = dice[4];
	dice[4] = dice[5];
	dice[5] = dice[1];
	dice[1] = tmp;
}
void moveW(int dice[6])
{
	int tmp = dice[0];
	dice[0] = dice[2];
	dice[2] = dice[5];
	dice[5] = dice[3];
	dice[3] = tmp;
}
int main()
{
	int dice[6] = { 0 };
	cin >> dice[0] >> dice[1] >> dice[2] >> dice[3] >> dice[4] >> dice[5];
	int q;
	cin >> q;
	for(int i = 0;i < q;i++)
	{
		int top, front;
		cin >> top >> front;
		for(int j = 0;j < 6;j++)
		{
			if(dice[j] == top)
			{
				switch(j)
				{
				case 1:
					moveN(dice);
					break;
				case 2:
					moveE(dice);
					break;
				case 3:
					moveW(dice);
					break;
				case 4:
					moveN(dice);
					break;
				case 5:
					moveN(dice);
					moveN(dice);
					break;
				}
			}
		}
		for(int j = 0;j < 6;j++)
		{
			if(dice[j] == front)
			{
				switch (j)
				{
				case 1:
					cout << dice[2] << endl;
					break;
				case 2:
					cout << dice[4] << endl;
					break;
				case 3:
					cout << dice[1] << endl;
					break;
				case 4:
					cout << dice[3] << endl;
					break;
				}
			}
		}
	}
	return 0;
}
