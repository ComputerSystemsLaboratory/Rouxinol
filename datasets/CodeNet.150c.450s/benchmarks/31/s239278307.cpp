#include<iostream>

using namespace std;

int max(int a, int b)
{
	if (a >= b)return a;
	else return b;
}

int main()
{
	int n, r[2], maxv, min;
	cin >> n;
	cin >> r[0] >> r[1];
	maxv = r[1] - r[0];
	min = -max(-r[0], -r[1]);
	for (int i = 2; i < n; i++)
	{
		cin >> r[0];
		maxv = max(maxv, r[0] - min);
		min = -max(-min, -r[0]);
	}
	cout << maxv << endl;
    return 0;
}