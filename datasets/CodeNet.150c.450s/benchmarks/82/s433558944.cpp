#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<string>
#include<string.h>
using namespace std;
//const int sss[10] = { 0, 6, 5, 4, 3, 2, 1 };
struct DICE
{
	int f[8];
};
DICE dice;

int  ch(char a)
{
	int s[60];
	for (int i = 1; i < 7; i++)
	{
		s[i] = dice.f[i];
	}
		int k = a;
	switch (k)
	{
	case 78://N
		dice.f[1] = s[2];
		dice.f[2] = s[6];
		dice.f[6] = s[5];
		dice.f[5] = s[1];
		break;
	case 69:
		dice.f[1] = s[4];
		dice.f[4] = s[6];
		dice.f[6] = s[3];
		dice.f[3] = s[1];
		break;
	case 83://S
		dice.f[2] = s[1];
		dice.f[1] = s[5];
		dice.f[5] = s[6];
		dice.f[6] = s[2];
		break;
	case 87:
		dice.f[4] = s[1];
		dice.f[1] = s[3];
		dice.f[3] = s[6];
		dice.f[6] = s[4];
		break;
	}
	return 0;
}
int ch2(int ue,int mae)
{
	int x;
	for (int i = 1; i < 7; i++)
		if (dice.f[i] == ue)
		{
			x = i;
			break;
		}
	switch (x)
	{
	case 1:break;
	case 2:ch('N');
		break;
	case 3:ch('W');
		break;
	case 4:ch('E');
		break;
	case 5:ch('S');
		break;
	case 6:ch('N');ch('N');
		break;
	}
	for (int i = 1; i < 7; i++)
		if (dice.f[i] == mae)
		{
		x = i;
		break;
		}

	switch (x)
	{
	case 2:
		return dice.f[3];
		break;
	case 3:
		return dice.f[5];
		break;
	case 4:
		return dice.f[2];
		break;
	case 5:
		return dice.f[4];
		break;
	}
}
int main()
{
	
	for (int i = 1; i < 7; i++)cin >> dice.f[i];
/*	char d[10000];
	cin >> d;
	int z = strlen(d);
	for (int i = 0; i <z; i++)
	{
		int a=ch(d[i]);
	}
	cout << dice.f[1]<<endl;
	*/
	
	int num;
	cin >> num;
	while (num--)
	{
		int w, e;
		cin >> w >> e;
		cout<<ch2(w, e)<<endl;
	}
}