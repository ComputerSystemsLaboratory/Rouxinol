#include <iostream>
#include <vector>

using namespace std;

#define C

#ifdef C
int A[100][100] = {};
int Cu[100] = {};
int R[100] = {};
int main(void)
{
	int r, c;
	int tmp;
	int sum = 0;
	cin >> r >> c;
	for (size_t i = 0; i < r; i++)
	{
		for (size_t j = 0; j < c; j++)
		{
			cin >> tmp;
			A[i][j] = tmp;
			Cu[j] += tmp;
			R[i] += tmp;
			sum += tmp;
		}
	}
	for (size_t i = 0; i < r ; i++)
	{
		for (size_t j = 0; j < c; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << R[i] << endl;
	}
	for (size_t i = 0; i < c; i++)
	{
		cout << Cu[i] << " ";
	}
	cout << sum << endl;


	return 0;

}
#endif // C