#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int INF = (1 << 30);
const int N = 100005;
struct Card
{
	char suit;
	int value;
} card[N], t[N];
Card L[N / 2 + 1], R[N / 2 + 1];

void _merge(Card a[], int l, int m, int r)	//[l, r)
{
	int i, j, k;
	int n1 = m - l;
	int n2 = r - m;
	for (i = 0; i < n1; ++i)
		L[i] = a[l + i];
	for (i = 0; i < n2; ++i)
		R[i] = a[m + i];
	L[n1].value = R[n2].value = INF;
	i = j = 0;
	for (k = l; k < r; ++k)
	{
		if (L[i].value <= R[j].value)
			a[k] = L[i++];
		else
			a[k] = R[j++];
	}
}

void _merge_sort(Card arr[], int l, int r)
{
	if (l + 1 >= r)
		return;
	int m = (l + r) / 2;
	_merge_sort(arr, l, m);
	_merge_sort(arr, m, r);
	_merge(arr, l, m, r);
}

int partition(Card arr[], int p, int r)	//[p, r)????????????,????????????pivot??????
{
	int pivot = arr[r - 1].value;
	int i = p;
	for (int j = p; j < r - 1; ++j)
	{
		if (arr[j].value <= pivot)
		{
			swap(arr[i++], arr[j]);
		}
	}
	swap(arr[i], arr[r - 1]);
	return i;
}

void q_sort(Card arr[], int l, int r)
{
	if (l + 1 < r)
	{
		int t = partition(arr, l, r);
		q_sort(arr, l, t);
		q_sort(arr, t, r);
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> card[i].suit >> card[i].value;
		t[i] = card[i];
	}
	q_sort(card, 0, n);
	_merge_sort(t, 0, n);
	bool flag = true;
	for (int i = 0; i < n; ++i)
	{
		if (card[i].suit != t[i].suit)
		{
			flag = false;
			break;
		}
	}
	if (flag)
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;

	for (int i = 0; i < n; ++i)
		cout << card[i].suit << ' ' << card[i].value << endl;

	return 0;
}