#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];

	int min = p[0];
	int max = -1000000000;
	for (int j = 1; j < n; j++)
	{
		if (p[j] - min > max)max = p[j] - min;
		if (p[j] < min)min = p[j];
	}

	cout << max<<endl;
    return 0;
}
