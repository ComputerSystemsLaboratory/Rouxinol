#include<iostream>
#include<cstdio>

using namespace std;
int N;
int A[300];

int parent(int i)
{
	return i / 2;
}
int leftchild(int i)
{
	return 2 * i;
}
int rightchild(int i)
{
	return 2 * i + 1;
}
int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}
	for (int i = 1; i <= N; i++)
	{
		int p = parent(i);
		int l = leftchild(i);
		int r = rightchild(i);
		cout << "node " << i << ": key = " << A[i];
		if (p > 0 && p <= N)
		{
			cout << ", parent key = " << A[p];
		}
		if (l > 0 && l <= N)
		{
			cout << ", left key = " << A[l];
		}
		if (r > 0 && r <= N)
		{
			cout << ", right key = " << A[r];
		}
		cout << ", " << endl;
	}
	return 0;
}
