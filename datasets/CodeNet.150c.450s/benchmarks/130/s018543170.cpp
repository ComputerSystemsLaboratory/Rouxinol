#include <iostream>
#include <vector>

int main(){
	using namespace std;
	int A_num, b_num, A_count, b_count, data,row=0, col=0;
	cin >> A_num >> b_num;
	A_count = A_num*b_num;
	b_count = b_num;
	vector<vector<int>> A(A_num,vector<int>(b_num));
	vector<int> b(b_num);
	while (A_count > 0)
	{
		cin >> data;
		A[row][col] = data;
		col++;
		if (col == b_num)
		{
			row++;
			col = 0;
		}
		A_count--;
	}
	col = 0;
	while (b_count > 0)
	{
		cin >> data;
		b[col] = data;
		col++;
		b_count--;
	}
	for (int i = 0; i < A_num; i++)
	{
		int sum = 0;
		for (int j = 0; j < b_num; j++)
		{
			sum += A[i][j] * b[j];
		}
		cout << sum << endl;
	}

	return 0;
}