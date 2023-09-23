#include <iostream>
#include <cstdio>

using namespace std;

void print_array(int *x, int n)
{
	for (int k = 0; k < n; ++k)
	{
		if (k == n- 1)
		{
			printf("%d\n", x[k]);
		}
		else
		{
			printf("%d ", x[k]);
		}
	}
}

int main(int argc, char const *argv[])
{
	int input_size, swap_count = 0, temp;
	cin >> input_size;
	int array[input_size];

	for (int i = 0; i < input_size; ++i)
	{
		cin >> array[i];
	}

	// ==== bubble sort ==== //
	for (int i = 0; i < input_size; ++i)
	{
		for (int j = input_size - 1; j >= i + 1; --j)
		{
			if(array[j] < array[j-1])
			{
				temp = array[j];
				array[j] = array[j-1];
				array[j-1] = temp;
				swap_count++;
			}
		}
	}
	print_array(array, input_size);
	printf("%d\n", swap_count);

	return 0;
}