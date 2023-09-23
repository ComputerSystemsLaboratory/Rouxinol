#include <iostream>
using namespace std;

int functione(int num[], int N);

int main()
{
	int n;
	cin >> n;
	int *num = new int [n];

	for(int i = 0; i < n; i++)
		cin >> num[i];

	cout << functione(num, n) << endl;
	return 0;
}

int functione(int num[], int N)
{
	int max = -2000000000;
	int min = num[0];
	for(int i = 1; i<N; i++)
	{
		if(max<num[i]-min)
			max = num[i]-min;
		if(min > num[i])
			min = num[i];
	}
	return max;
}