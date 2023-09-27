#include <iostream>
using namespace std;

int main()
{
	int i, j;
	long int sum = 0;
	long int min, max;

	cin >> j;

	long int a;

	min = 1000000;
	max = -1000000;

	for(i=0;i<j;i++){
		cin >> a;
		sum += a;
		if(min > a)
			min = a;
		if(max < a)
			max = a;
	}

	cout << min <<' '<< max <<' '<< sum << '\n';

	return 0;
}