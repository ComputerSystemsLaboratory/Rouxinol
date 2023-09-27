#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>


using namespace std;


int main() 
{
	int r, c;
	int arr[100 + 1][100 + 1] = {};

	cin >> r >> c;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < r; i++)
	{
		int sum = 0;
		for (int j = 0; j < c; j++)
		{ 
			sum += arr[i][j];
		}
		arr[i][c] = sum;
	}

	for (int i = 0; i < c; i++)
	{
		int sum = 0;
		for (int j = 0; j < r; j++)
		{
			sum += arr[j][i];
		}
		arr[r][i] = sum;
	}

	for (int i = 0; i < r; i++)
	{
		arr[r][c] += arr[i][c];
	}
	for (int i = 0; i <= r; i++)
	{
		for (int j = 0; j <= c; j++)
			cout << (j ? " " : "") << arr[i][j];
		cout << endl;
	}
	

	return 0;
}