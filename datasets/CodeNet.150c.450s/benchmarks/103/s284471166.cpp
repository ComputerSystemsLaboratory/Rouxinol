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

int cntBit(int bit)
{
	int cnt = 0;

	do
	{
		cnt += bit & 1;

		bit /= 2;

	} while (bit);

	return cnt;
}

int main(void)
{

	while (cin >> n >> s,n!=0||s!=0)
	{
		int cnt = 0;

		for (int i = 0; i < 1024; i++)
		{
			if (cntBit(i) != n)continue;

			int sum = 0;

			for (int j = 0; j < 10; j++)
				if ((i >> j) & 1)sum += j;

			if (sum == s)cnt++;
		}

		cout << cnt << endl;
	}
	

	return 0;
}
