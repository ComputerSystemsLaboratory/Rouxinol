#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<utility>

using namespace std;

int n, s;

int cal(int a, int b, int c)
{


	if (a == 1 && b >= c && b < 10)
	{
		return 1;
	}
	if (a == 1)
	{
		return 0;
	}
	int hoge = 0;


	for (int i = c; i < 10 && i < b; i++)
	{
		hoge += cal(a - 1, b - i, i + 1);
	}

	return hoge;


}

int main(void)
{
	while (cin >> n >> s,1)
	{
		if (n==0&&s==0)
		{
			break;
		}

		cout << cal(n, s, 0) << endl;
	}

	return 0;
}


