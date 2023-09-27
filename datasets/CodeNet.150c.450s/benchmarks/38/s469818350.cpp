





#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

#define COMPARE(left , right)   (left == right ? "YES" : "NO")
#define SQUARE(value)			(value * value)
#define SIZE	3

int main(void)
{
	int ansArray[SIZE] = {0};
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cin >> ansArray[j];
		}

		sort(ansArray , ansArray + SIZE);

		cout << COMPARE(SQUARE(ansArray[0]) +SQUARE( ansArray[1]) , SQUARE(ansArray[2])) << endl;
	}

	return 0;
}