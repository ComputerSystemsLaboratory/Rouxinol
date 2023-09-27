#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num = 0;

	cin >> num;
	num = (int)pow((double)num, 3.0);
	cout << num << endl;

	return 0;
}