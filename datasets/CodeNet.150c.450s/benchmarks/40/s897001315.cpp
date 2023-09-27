#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#define _USE_MATH_DEFINES

#include<math.h>
#include<unordered_map>

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int main()
{
	int a[6];

	for (int i = 0; i < 6; i++)
	{
		cin >> a[i];
	}

	string command;
	cin >> command;

	for (auto& c : command)
	{
		int temp;
		switch (c)
		{
		case 'E':
			temp = a[0];
			a[0] = a[3];
			a[3] = a[5];
			a[5] = a[2];
			a[2] = temp;
			break;
		case 'W':
			temp = a[0];
			a[0] = a[2];
			a[2] = a[5];
			a[5] = a[3];
			a[3] = temp;
			break;
		case 'N':
			temp = a[4];
			a[4] = a[0];
			a[0] = a[1];
			a[1] = a[5];
			a[5] = temp;
			break;
		case 'S':
			temp = a[4];
			a[4] = a[5];
			a[5] = a[1];
			a[1] = a[0];
			a[0] = temp;
			break;
		}
	}

	printf("%d\n", a[0]);
	return 0;
}