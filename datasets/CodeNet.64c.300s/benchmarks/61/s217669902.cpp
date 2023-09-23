#include <iostream>
using namespace std;

int main(){
	int r,c;
	cin >> r >> c;
	int sum[103][103] = {0};
	int x[103][103] = {0};
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cin >> x[i][j];
		}
	}
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout << x[i][j] << " ";
			sum[i+1][0] += x[i][j];
			sum[0][j+1] += x[i][j];
		}
		cout << sum[i+1][0] << endl;
	}
	for (int i = 0; i < c; ++i)
	{
		cout << sum[0][i+1] << " ";
		sum[r+1][c+1] += sum[0][i+1];
	}
	cout << sum[r+1][c+1] << endl;
}