//ITP1_7_C
#include <iostream>
using namespace std;

int array[105][105];
int sumall;

int main() {
	int sum, c, r;
	cin >> c >> r;
	for (int i = 0; i < c; i++)	{
		for (int j = 0; j < r; j++)	{
			cin >> array[i][j];
		}
	}
	for (int i = 0; i < c; i++)	{
		sum = 0;
		for (int j = 0; j < r; j++)	{
			sum += array[i][j];
		}
		array[i][r] = sum;
		sumall += sum;
	}
	array[c][r] = sumall;
	for (int i = 0; i < r; i++)	{
		sum = 0;
		for (int j = 0; j < c; j++)	{
			sum += array[j][i];
		}
		array[c][i] = sum;
	}
	for (int i = 0; i < c + 1; i++)	{
		for (int j = 0; j < r + 1; j++)	{
			cout << array[i][j];
			if (j == r) cout << endl;
			else cout << " ";
		}
	}
	return 0;
}