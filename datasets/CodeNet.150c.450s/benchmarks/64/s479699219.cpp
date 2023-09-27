#include<iostream>
#include<algorithm>
using namespace std;

bool func(int size,int arr[],int index,int val,int target)
{
	if (index > size)return false;
	if (val > target)return false;
	else if (val == target)return true;
	else return (func(size,arr, index + 1, val + arr[index], target) || func(size,arr, index + 1, val, target));
}

int main()
{
	int n, *A;
	int q, *B;
	cin >> n;
	A = new int[n];
	for (int i = 0; i < n; i++)cin >> A[i];
	cin >> q;
	B = new int[q];
	for (int i = 0; i < q; i++)
	{
		cin >> B[i];
		if (func(n,A, 0, 0, B[i]))cout << "yes" << endl;
		else cout << "no" << endl;
	}
	delete[]A;
	delete[]B;
	return 0;
}