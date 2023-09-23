//include "stdafx.h"
#include<iostream>
#include<algorithm>
using namespace std;
void maximumProfit();


int main()
{
	maximumProfit();
	return 0;
}

void maximumProfit()
{
	const int MAX = 200000;
	int R[MAX];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> R[i];
	}
	int mi = R[0];
	int ma = -2000000000;
	for (int i = 1; i < N; i++)
	{
		ma = max(ma,  R[i]-mi);
		mi = min(mi, R[i]);
	}

	cout << ma << endl;
}