/*
时间:2020-8-6
书籍：算法和数据结构
内容：归并排序
页数：P125
*/
#include<iostream>
using namespace std;
int partition(int A[], int p, int r)
{
	int base = A[r];
	int i = p;
	for (int j = p; j < r; ++j)
	{
		if (A[j] <= base)
		{
			swap(A[i], A[j]);
			++i;
		}
	}
	swap(A[i], A[r]);
	return i;                         //返回分割点的下表
}

int main() 
{
	int n;
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> A[i];
	int part = partition(A, 0, n - 1);
	for (int i = 0; i < n - 1; ++i)
	{
		if (i == part)
			cout << "[" << A[i] << "]" << " ";
		else
			cout << A[i]<<" ";
	}
	cout << A[n - 1]<<endl;
	delete[]A;
	return 0;
}
