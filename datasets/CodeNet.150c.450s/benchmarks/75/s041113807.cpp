#include<iostream>
#include<cstdio>
#include<algorithm>
#define Lens 500005

using namespace std;
int N;
int A[Lens];

int lc(int i)
{
	return 2 * i;
}
int rc(int i)
{
	return 2 * i + 1;
}

void maxheapify(int i)
{
	int l = lc(i);
	int r = rc(i);
	if (r <= N)
	{
		if (A[i] > A[l] && A[i] > A[r])
			return;
		else if (A[l] > A[i] && A[l] > A[r])
		{
			swap(A[i], A[l]);
			maxheapify(l);
		}
		else
		{
			swap(A[i], A[r]);
			maxheapify(r);
		}
	}
	else if (l <= N)
	{
		if (A[l] > A[i])
		{
			swap(A[i], A[l]);
		}
	}
	else
		return;


}

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}
	for (int i = N / 2; i > 0; i--)
	{
		maxheapify(i);
	}
	for (int i = 1; i <= N; i++)
	{
		cout << ' ' << A[i];
	}
	cout << endl;
	return 0;
}
