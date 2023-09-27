#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int dice[3][4] = {0};
	cin >> dice[0][1] >> dice[1][1] >>  dice[1][2] >> dice[1][0] >> dice[1][3] >> dice[2][1];
	char command[100];
	cin >> command;
	int length = strlen(command);
	for (int i = 0; i < length; i++)
	{
		switch (command[i])
		{
		case 'E':
		{
			int tmp = dice[0][1];
			dice[0][1] = dice[1][0];
			dice[1][0] = dice[2][1];
			dice[2][1] = dice[1][2];
			dice[1][2] = tmp;
			break;
		}
		case 'N':
		{
			int tmp = dice[0][1];
			dice[0][1] = dice[1][1];
			dice[1][1] = dice[2][1];
			dice[2][1] = dice[1][3];
			dice[1][3] = tmp;
			break;
		}
		case 'S':
		{
			int tmp = dice[0][1];
			dice[0][1] = dice[1][3];
			dice[1][3] = dice[2][1];
			dice[2][1] = dice[1][1];
			dice[1][1] = tmp;
			break;
		}
		case 'W':
		{
			int tmp = dice[0][1];
			dice[0][1] = dice[1][2];
			dice[1][2] = dice[2][1];
			dice[2][1] = dice[1][0];
			dice[1][0] = tmp;
			break;
		}
		}
	}
	cout << dice[0][1] << endl;
	return 0;
}
