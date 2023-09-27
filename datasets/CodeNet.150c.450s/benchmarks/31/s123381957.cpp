#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int MAX = (int) pow(10., 9.);
const int MIN = 1;

int main(int argc, char const *argv[])
{
	int input_size, num, temp, num_min;
	int sub_max = MIN - MAX;
	cin >> input_size;

	for (int i = 0; i < input_size; ++i)
	{
		cin >> num;
		if(i == 0)
		{
			num_min = num;
			continue;
		}
		temp = num - num_min;
		if(sub_max < temp) sub_max = temp;
		if(num_min > num) num_min = num;
	}

	printf("%d\n", sub_max);

	return 0;
}