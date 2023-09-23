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
	int input_size, min, count = 0;
	cin >> input_size;

	int array[input_size];

	for (int i = 0; i < input_size; ++i)
	{
		cin >> array[i];
	}

	//=====  SelectionSort =====//
	for (int i = 0; i < input_size; ++i)
	{
		// i は配列の中の未ソート部分の先頭を表す
		min = i;
		for (int j = i; j < input_size; ++j)
		{
			if(array[j] < array[min])
			{
				min = j;
			}
		}
		if(min != i) count++;
		int temp = array[min];
		array[min] = array[i];
		array[i] = temp;
	}
	print_array(array, input_size);
	printf("%d\n", count);

	return 0;
}