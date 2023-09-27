#include<iostream>
#include<cstdio>
#define Lens 2000010
#define range 10005

using namespace std;
int N;
int A[Lens], B[range], ans[Lens];

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N; i++)
	{
		B[A[i]]++;
	}
	for (int i = 1; i < range; i++)
	{
		B[i] += B[i - 1];
	}
	for (int i = 0; i < N; i++)
	{
		ans[B[A[i]]] = A[i];
		B[A[i]]--;
	}
	for (int i = 1; i <= N; i++)
	{
		if (i > 1) cout << ' ';
		cout << ans[i];
	}
	cout << endl;
	return 0;
}
