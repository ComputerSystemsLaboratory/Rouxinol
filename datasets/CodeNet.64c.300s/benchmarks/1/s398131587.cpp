#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
int A[100000];
int N;

int partition(int p, int r)
{
	int x = A[r];
	int i = p-1 ;
	for (p; p <= r; p++)
	{
		if (A[p] <= x)
		{
			swap(A[++i],A[p]);
		}
	}
	return i;
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	int ans = partition(0, N - 1);
	for (int i = 0; i < N; i++)
	{
		if (i > 0) cout << ' ';
		if (i == ans) cout << '[';
		cout<< A[i];
		if (i == ans) cout << ']';	
	}
	cout << endl;
	return 0;
}
