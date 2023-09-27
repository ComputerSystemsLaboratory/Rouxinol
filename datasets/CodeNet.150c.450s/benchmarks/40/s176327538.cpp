#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<string>
#include<string.h>
using namespace std;

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

int main()
{
	
	for (int i = 1; i < 7; i++)cin >> dice.f[i];
	char d[10000];
	cin >> d;
	int z = strlen(d);
	for (int i = 0; i <z; i++)
	{
		int a=ch(d[i]);
	}

	cout << dice.f[1]<<endl;
}