#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<string.h>

typedef long long int ll;
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	int i;
	int num = 0;
	for (i = a; i <= b; i++)
	{
		if (c%i == 0)
		{
			num++;
		}
	}
	cout << num << endl;
	return 0;
}
