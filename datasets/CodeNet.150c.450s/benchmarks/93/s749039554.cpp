#include <iostream>
#include <vector>

using namespace std;

struct Card {
	char suit;
	int number;
	int order;
};

int partition(vector<Card>& A, int p, int r)
{
	int x = A[r].number;
	int i = p - 1;

	for (int j = p; j < r; ++j)
		if (A[j].number <= x)
			i++, swap(A[i], A[j]);
	swap(A[i + 1], A[r]);

	return i + 1;
}

void quick_sort(vector<Card>& A, int p, int r)
{
	if (p < r)
	{
		int q = partition(A, p, r);
		quick_sort(A, p, q - 1);
		quick_sort(A, q + 1, r);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<Card> A(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i].suit >> A[i].number;
		A[i].order = i;
	}

	quick_sort(A, 0, n - 1);

	bool stable = true;
	for (int i = 0; i < n; ++i)
		if (A[i].number == A[i + 1].number && A[i].order > A[i + 1].order)
			stable = false;

	cout << (stable ? "Stable" : "Not stable") << endl;

	for (int i = 0; i < n; ++i)
		cout << A[i].suit << " " << A[i].number << endl;

	return 0;
}