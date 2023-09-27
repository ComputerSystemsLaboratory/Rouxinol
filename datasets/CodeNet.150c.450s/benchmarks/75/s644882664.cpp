#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 2000000

int n, T[MAX + 1];

void maxheap(int i)
{
	int l, r, max_k;
	l = i * 2;
	r = l + 1;

	if (r <= n)
	{
		max_k = max({ T[i],T[l],T[r] });
		if (max_k == T[l])
		{
			swap(T[i], T[l]);
			maxheap(l);
		}
		else if (max_k == T[r])
		{
			swap(T[i], T[r]);
			maxheap(r);
		}
	}
	else if (r == n + 1)
	{
		if (T[l] > T[i])swap(T[l], T[i]);
		maxheap(l);
	}
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> T[i];
	}
	for (int i = n / 2; i >= 1; i--)maxheap(i);
	for (int i = 1; i <= n; i++)
	{
		cout << " " << T[i];
	}
	cout << endl;
	return 0;
}